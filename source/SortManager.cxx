#include "SortManager.h"
#include "GoddessData.h"

int egemin = 2;

// --------------------- Global Functions ---------------------- //

void UPDSSHMEM ( time_t& t1, time_t& t2, TMapFile* mfile, char* shareMemFile )
{
    t1 = time ( NULL );
    mfile->Update();
    t2 = time ( NULL );
    printf ( "done! " );
    printf ( "shared memory size: %i\n", mfile->GetSize() );
    printf ( "update time: %li seconds ", t2 - t1 );
    printf ( "at %7.2f Mbytes/sec\n", ( float ) mfile->GetSize() / ( t2 - t1 ) / 1000000.0 );
    printf ( "to mapfile [%s] on ",shareMemFile );
    time_stamp();
    fflush ( stdout );

    return;
}

void CheckNoArgs ( int required, int actual, char* str )
{
    if ( required < actual )
    {
        printf ( "argument problem with chat option\n" );
        printf ( "--> %s\n", str );
        printf ( "required # arguments: %i\n", required - 1 );
        printf ( "actual   # arguments: %i\n", actual - 1 );
        printf ( "Please fix and try again, quitting...\n" );
        exit ( 0 );
    }
}

float findPolarFromCartesian ( float xx, float yy, float zz, float* rr )
{
    float d1;

    *rr = sqrtf ( xx * xx + yy * yy + zz * zz );
    d1 = acosf ( zz / *rr );

    return d1;
}

float findAzimuthFromCartesian ( float xx, float yy )
{
    float d1;

    d1 = atan2f ( yy, xx );

    return d1;
}

int GebTypeStr ( int type, char str[] )
{
//   printf("got type %i, %i\n", type,GEB_TYPE_DECOMP);
    if ( type == GEB_TYPE_DECOMP )
    {
        sprintf ( str, "GEB_TYPE_DECOMP      " );
    }
    else if ( type == GEB_TYPE_BGS )
    {
        sprintf ( str, "GEB_TYPE_BGS         " );
    }
    else if ( type == GEB_TYPE_RAW )
    {
        sprintf ( str, "GEB_TYPE_RAW         " );
    }
    else if ( type == GEB_TYPE_TRACK )
    {
        sprintf ( str, "GEB_TYPE_TRACK       " );
    }
    else if ( type == GEB_TYPE_S800_RAW )
    {
        sprintf ( str, "GEB_TYPE_S800_RAW    " );
    }
    else if ( type == GEB_TYPE_NSCLnonevent )
    {
        sprintf ( str, "GEB_TYPE_NSCLnonevent" );
    }
    else if ( type == GEB_TYPE_GT_SCALER )
    {
        sprintf ( str, "GEB_TYPE_GT_SCALER   " );
    }
    else if ( type == GEB_TYPE_GT_MOD29 )
    {
        sprintf ( str, "GEB_TYPE_GT_MOD29    " );
    }
    else if ( type == GEB_TYPE_S800PHYSDATA )
    {
        sprintf ( str, "GEB_TYPE_S800PHYSDATA" );
    }
    else if ( type == GEB_TYPE_G4SIM )
    {
        sprintf ( str, "GEB_TYPE_G4SIM       " );
    }
    else if ( type == GEB_TYPE_CHICO )
    {
        sprintf ( str, "GEB_TYPE_CHICO       " );
    }
    else if ( type == GEB_TYPE_NSCLNONEVTS )
    {
        sprintf ( str, "GEB_TYPE_NSCLNONEVTS " );
    }
    else if ( type == GEB_TYPE_DGS )
    {
        sprintf ( str, "GEB_TYPE_DGS         " );
    }
    else if ( type == GEB_TYPE_DGSTRIG )
    {
        sprintf ( str, "GEB_TYPE_DGSTRIG     " );
    }
    else if ( type == GEB_TYPE_DFMA )
    {
        sprintf ( str, "GEB_TYPE_DFMA        " );
    }
    else if ( type == GEB_TYPE_AGOD )
    {
        sprintf ( str, "GEB_TYPE_AGOD        " );
    }
    //else if (type == GEB_TYPE_PHOSWICH)
    //sprintf (str, "GEB_TYPE_PHOSWICH    ");
    //else if (type == GEB_TYPE_PHOSWICHAUX)
    //sprintf (str, "GEB_TYPE_PHOSWICHAUX ");

    else
    {
        sprintf ( str, "%i is unknown, maybe update 'GebTypeStr' function?", type );
        return ( 1 );
    };
//      printf("type: %s\n",str);

    return 0;

}

TH2F* mkTH2F ( char* str1, char* str2, int n1, double lo1, double hi1, int n2, double lo2, double hi2 )
{
    TH2F* tmppt;

    if ( !SortManager::sinstance()->execParams->UpdateRootFile )
    {
        tmppt = new TH2F ( str1, str2, n1, lo1, hi1, n2, lo2, hi2 );
        printf ( "Created Object \"%s\", %p\n", str1, ( void* ) tmppt );
    }
    else
    {
        tmppt = ( TH2F* ) gROOT->FindObject ( str1 );
        printf ( "Found Object \"%s\", %p\n", str1, ( void* ) tmppt );
    };

    return tmppt;
}

TH2F* make2D ( const char* txt, int xln, int xlo, int xhi, int yln, int ylo, int yhi )
{
    char* str = ( char* ) calloc ( STRLEN, sizeof ( char ) );;
    strcpy ( str, txt );
    TH2F* h2D;

//sprintf(str,txt);
    h2D = mkTH2F ( str, str, xln, xlo, xhi, yln, ylo, yhi );

    return h2D;
}

TH1D* mkTH1D ( char* str1, char* str2, int nn, double lo, double hi )
{
    TH1D* tmppt;

    if ( !SortManager::sinstance()->execParams->UpdateRootFile )
    {
        tmppt = new TH1D ( str1, str2, nn, lo, hi );
        printf ( "Created Object \"%s\", %p\n, \"%s\"", str1, ( void* ) tmppt, str2 );
    }
    else
    {
        tmppt = ( TH1D* ) gROOT->FindObject ( str1 );
        printf ( "Found Object \"%s\", %p\n", str1, ( void* ) tmppt );
    }

    return tmppt;
}

TH1D* make1D ( const char* txt, int xln, int xlo, int xhi )
{
    char* str = ( char* ) calloc ( STRLEN, sizeof ( char ) );
    strcpy ( str, txt );
    double xlod, xhid;
    TH1D* h1D;

    xlod = xlo;
    xhid = xhi;

    h1D = mkTH1D ( str, str, xln, xlod, xhid );
    return h1D;
}

// --------------------- PARS ---------------------- //

PARS::PARS()
{

}

PARS::~PARS()
{

}

// --------------------- GEB_EVENT ---------------------- //

GEB_EVENT::GEB_EVENT()
{
    ptgd.clear();
    ptinp.clear();

    maxGebs = MAXGEBS;
}

GEB_EVENT::GEB_EVENT ( int maxGebs_ )
{
    ptgd.clear();
    ptinp.clear();

    maxGebs = maxGebs_;
}

GEB_EVENT::~GEB_EVENT()
{

}

// --------------------- SortManager ---------------------- //

SortManager* SortManager::s_instance = nullptr;

SortManager::SortManager()
{
    execParams = new PARS();

    gammaDets = new std::vector<GamData>();
    siDets = new std::vector<SiDataBase>();
    ionChamber = new std::vector<IonData>();

    strcpy ( CommandFileName, "GEBSort.command" );

    nn1 = 0;
    nn2 = 0;
    nn3 = 0;
    firsttime = 1;

    nn = 0;
    ii = 0;
    nbadTS = 0;

    GEB_event = new GEB_EVENT();
    overflowGEBEv = new GEB_EVENT();

    for ( int i = 0; i < MAXCOINEV; i++ )
    {
        buffHeader[i] = new GEBDATA;
        buffData[i] = new char[50000];

//         DFMAEvent[i] = new DFMAEVENT;
//         AGODEvent[i] = new AGODEVENT;
//         DGSEvent[i] = new DGSEVENT;
    }
}

SortManager::~SortManager()
{

}

SortManager* SortManager::sinstance()
{
    if ( s_instance == NULL )
    {
        s_instance = new SortManager();
    }

    return s_instance;
}

void SortManager::signal_catcher ( int sigval )
{
    printf ( "\nGSSort/GEBacq received signal <%i> on ", sigval );
    time_stamp();
    s_instance->execParams->WeWereSignalled = TRUE;
    fflush ( stdout );
}

int SortManager::ShowStatus()
{
    printf ( "read %i events; ", ( execParams->CurEvNo - execParams->firstEvent ) );
    printf ( "Pars.beta=%6.4f; ", ( float ) execParams->beta );
    printf ( "time since last update %i minutes\n", ( int ) tdmp );
    printf ( "CommandFileName=\"%s\"\n", CommandFileName );
    fflush ( stdout );

    return 0;
}

int SortManager::GEBSort_read_chat ( char* name )
{
    /* declarations */

    std::FILE* fp, *fp1;
    char* pc, str[STRLEN] = { '0' }, str1[STRLEN] = { '0' }, str2[STRLEN] = { '0' };

    int nnj = 0, nni = 0, st;
    char* p;
    int i1, i2;

    float r1, r2, rr;
    int echo = 0, nret;

    /* open chat file */

    if ( ( fp = fopen ( name, "r" ) ) == NULL )
    {
        printf ( "error: could not open chat file: <%s>\n", name );
        exit ( 0 );
    };
    printf ( "chat file: <%s> open\n", name );
    printf ( "\n" );
    fflush ( stdout );

    /* read content and act */

    pc = fgets ( str, STRLEN, fp );

    /* rmEndComment(str, STRLEN); */

    while ( pc != NULL )
    {
        if ( echo )
        {
            printf ( "chat->%s", str );
        }
        fflush ( stdout );

        /* attemp to interpret the line */

        if ( ( p = strstr ( str, "nevents" ) ) != NULL )
        {
            if ( execParams->nEvents == 2000000000 )
            {
                nret = sscanf ( str, "%s %llu", str1, &execParams->nEvents );
                CheckNoArgs ( nret, 2, str );
            }

            printf ( "will sort a max of %llu events\n", execParams->nEvents );
            fflush ( stdout );
        }
        else if ( str[0] == 35 )
        {
            /* '#' comment line, do nothing */
            nni--;                /* don't count as instruction */

        }
        else if ( str[0] == 59 )
        {
            /* ';' comment line, do nothing */
            nni--;                /* don't count as instruction */

        }
        else if ( str[0] == 10 )
        {
            /* empty line, do nothing */
            nni--;                /* don't count as instruction */

        }
        else if ( ( p = strstr ( str, "nocrystaltoworldrot" ) ) != NULL )
        {
            nret = sscanf ( str, "%s", str1 );
            execParams->nocrystaltoworldrot = 1;
            CheckNoArgs ( nret, 1, str );
        }
        else if ( ( p = strstr ( str, "firstEvent" ) ) != NULL )
        {
            nret = sscanf ( str, "%s %u", str1, &execParams->firstEvent );
            CheckNoArgs ( nret, 2, str );
            printf ( "will start sorting at event %d\n", execParams->firstEvent );
            fflush ( stdout );

        }
        else if ( ( p = strstr ( str, "AGATA_data" ) ) != NULL )
        {
            nret = sscanf ( str, "%s", str1 );
            CheckNoArgs ( nret, 1, str );
            execParams->AGATA_data = 1;
            printf ( "execParams->AGATA_data=%i, process AGATA geometry\n", execParams->AGATA_data );
        }
        else if ( ( p = strstr ( str, "timewin" ) ) != NULL )
        {
            nret = sscanf ( str, "%s %lli", str1, &execParams->dTS );
            CheckNoArgs ( nret, 2, str );
            printf ( "will sort using a time window of %lli\n", execParams->dTS );
            fflush ( stdout );
        }
        else if ( ( p = strstr ( str, "beamdir" ) ) != NULL )
        {
            nret = sscanf ( str, "%s %f %f %f", str1, &execParams->beamdir[0], &execParams->beamdir[1], &execParams->beamdir[2] );
            CheckNoArgs ( nret, 4, str );
            rr =
                execParams->beamdir[0] * execParams->beamdir[0] + execParams->beamdir[1] * execParams->beamdir[1] + execParams->beamdir[2] * execParams->beamdir[2];
            rr = sqrtf ( rr );
            printf ( "will use beam direction %f %f %f\n", execParams->beamdir[0], execParams->beamdir[1], execParams->beamdir[2] );
            printf ( "vector length= %f, normalizing\n", rr );
            execParams->beamdir[0] /= rr;
            execParams->beamdir[1] /= rr;
            execParams->beamdir[2] /= rr;
            printf ( "will use beam direction %f %f %f\n", execParams->beamdir[0], execParams->beamdir[1], execParams->beamdir[2] );
        }
        else if ( ( p = strstr ( str, "ndetlimits" ) ) != NULL )
        {
            nret = sscanf ( str, "%s %i %i", str1, &execParams->ndetlimlo, &execParams->ndetlimhi );
            CheckNoArgs ( nret, 3, str );
            printf ( "execParams->ndetlimlo=%i,", execParams->ndetlimlo );
            printf ( "execParams->ndetlimhi=%i\n", execParams->ndetlimhi );
        }
        else if ( ( p = strstr ( str, "fomlimits" ) ) != NULL )
        {
            nret = sscanf ( str, "%s %i %f %f", str1, &i1, &r1, &r2 );
            CheckNoArgs ( nret, 3, str );
            execParams->fomlo[i1] = r1;
            execParams->fomhi[i1] = r2;
        }
        else if ( ( p = strstr ( str, "modwrite" ) ) != NULL )
        {
            nret = sscanf ( str, "%s %i", str1, &execParams->modwrite );
            CheckNoArgs ( nret, 2, str );
        }

        else if ( ( p = strstr ( str, "requiretracked" ) ) != NULL )
        {
            nret = sscanf ( str, "%s %i", str1, &execParams->requiretracked );
            CheckNoArgs ( nret, 2, str );
            printf ( "will require tracked data before mode2 binning\n" );
        }
        else if ( ( p = strstr ( str, "tsnumwrites" ) ) != NULL )
        {
            nret = sscanf ( str, "%s %u", str1, &execParams->tsnumwrites );
            CheckNoArgs ( nret, 2, str );

        }
        else if ( ( p = strstr ( str, "CCcal" ) ) != NULL )
        {
            nret = sscanf ( str, "%s %s", str1, str2 );
            CheckNoArgs ( nret, 2, str );
            fp1 = fopen ( str2, "r" );
            if ( fp1 == NULL )
            {
                printf ( "WARNING: could not open CCcal file \"%s\", quit\n", str2 );
//              exit (1);
            }
            else
            {
                printf ( "reading cal file \"%s\"\n", str2 );
                nnj = 0;
                st = fscanf ( fp1, "%i %f %f", &i1, &r1, &r2 );
                while ( st == 3 )
                {
                    nnj++;
                    execParams->CCcal_offset[i1] = r1;
                    execParams->CCcal_gain[i1] = r2;
                    printf ( "CC det/offset/gain %3i %6.3f %9.6f\n", i1, execParams->CCcal_offset[i1], execParams->CCcal_gain[i1] );
                    st = fscanf ( fp1, "%i %f %f", &i1, &r1, &r2 );
                };
                printf ( "done, read %i calibration \n", nnj );
                fclose ( fp1 );
            };
        }
        else if ( ( p = strstr ( str, "SEGcal" ) ) != NULL )
        {
            nret = sscanf ( str, "%s %s", str1, str2 );
            CheckNoArgs ( nret, 2, str );
            fp1 = fopen ( str2, "r" );
            if ( fp1 == NULL )
            {
                printf ( "WARNING: could not open SEGcal file \"%s\", quit\n", str2 );
            }
            else
            {
                printf ( "reading cal file \"%s\"\n", str2 );
                nnj = 0;
                st = fscanf ( fp1, "%i %i %f %f", &i1, &i2, &r1, &r2 );
                while ( st == 4 )
                {
                    nnj++;
                    execParams->SEGcal_offset[i1][i2] = r1;
                    execParams->SEGcal_gain[i1][i2] = r2;
                    printf ( "SEG det/seg/offset/gain %3i %2i %6.3f %9.6f\n", i1, i2,
                             execParams->SEGcal_offset[i1][i2], execParams->SEGcal_gain[i1][i2] );
                    st = fscanf ( fp1, "%i %i %f %f", &i1, &i2, &r1, &r2 );
                };
                printf ( "done, read %i calibrations \n", nnj );
                fclose ( fp1 );
            };
        }
        else if ( ( p = strstr ( str, "abort" ) ) != NULL )
        {

            printf ( "will abort\n" );
            fclose ( fp );
            printf ( "\n" );
            printf ( "chat file: <%s> closed\n", name );
            printf ( "processed %i sort instructions and %i lines\n", nni, nnj );
            printf ( "\n" );
            fflush ( stdout );
            exit ( 0 );

        }
        else if ( ( p = strstr ( str, "include" ) ) != NULL )
        {
            nret = sscanf ( str, "%s %s", str1, str2 );
            CheckNoArgs ( nret, 2, str );
            printf ( "will now include chatscript %s\n", str2 );
            fflush ( stdout );
            GEBSort_read_chat ( str2 );
            printf ( "done including chatscript %s\n", str2 );
            fflush ( stdout );

        }
        else if ( ( p = strstr ( str, "printevents" ) ) != NULL )
        {
            nret = sscanf ( str, "%s %u", str1, &execParams->NumToPrint );
            CheckNoArgs ( nret, 2, str );
            printf ( "will print details of the first %i events\n", execParams->NumToPrint );
            fflush ( stdout );

        }
        else if ( ( p = strstr ( str, "multlims" ) ) != NULL )
        {
            nret = sscanf ( str, "%s %i %i", str1, &execParams->multlo, &execParams->multhi );
            CheckNoArgs ( nret, 2, str );
            printf ( "will require mult bt: %i %i\n", execParams->multlo, execParams->multhi );
            fflush ( stdout );
        }
        else if ( ( p = strstr ( str, "beta" ) ) != NULL )
        {
            nret = sscanf ( str, "%s %f", str1, &execParams->beta );
            CheckNoArgs ( nret, 2, str );
            printf ( "will use execParams->Beta (v/c) correction of %f\n", execParams->beta );
            fflush ( stdout );
        }
        else if ( ( p = strstr ( str, "DumpEvery" ) ) != NULL )
        {
            nret = sscanf ( str, "%s %i", str1, &execParams->DumpEvery );
            CheckNoArgs ( nret, 2, str );
            printf ( "will dump to output file every %i minutes\n", execParams->DumpEvery );
            fflush ( stdout );

        }
        else if ( ( p = strstr ( str, "egemin" ) ) != NULL )
        {
            nret = sscanf ( str, "%s %i", str1, &egemin );
            CheckNoArgs ( nret, 2, str );
            printf ( "will require %i minimum germanium signal\n", egemin );
            fflush ( stdout );

        }
        else if ( ( p = strstr ( str, "gglen" ) ) != NULL )
        {
            nret = sscanf ( str, "%s %i", str1, &execParams->GGMAX );
            CheckNoArgs ( nret, 2, str );
        }
        else if ( ( p = strstr ( str, "exit" ) ) != NULL )
        {

            printf ( "will skip rest of chat file\n" );
            fclose ( fp );
            printf ( "\n" );
            printf ( "chat file: <%s> closed\n", name );
            printf ( "processed %i sort instructions and %i lines\n", nni, nnj );
            printf ( "\n" );
            fflush ( stdout );
            return ( 0 );

        }
        else
        {

            /*-----------------------------*/
            /* chatscript read error point */
            /*-----------------------------*/

            printf ( "line %2.2i in chat script, option :%s \n__not understood\n", nnj, str );
            printf ( "%i\n", str[0] );
            printf ( "aborting\n" );
            fflush ( stdout );
            exit ( 0 );
        };

        /* read next line in chat script */

        nnj++;                     /* line counter */
        nni++;                    /* instruction counter */
        pc = fgets ( str, STRLEN, fp );

    };

    /* done */

    fclose ( fp );
    printf ( "\n" );
    printf ( "chat file: <%s> closed\n", name );
    printf ( "processed %i sort instructions and %i lines\n", nni, nnj );
    printf ( "\n" );
    fflush ( stdout );
    return 0;
}

int SortManager::GEBGetEv ( )
{
    unsigned long long int TS;
    long long int dTS;

    GEB_event->ptgd.clear();
    GEB_event->ptinp.clear();

    int coincCounter = 0;

    while ( !inData.eof() && coincCounter < MAXCOINEV )
    {
        if ( overflowGEBEv->ptgd.size() > 1 )
        {
            std::cerr << "ERROR: The GEB_event overflow contains more than 1 element!\n";

            return -1;
        }
        else if ( overflowGEBEv->ptgd.size() == 1 )
        {
            *buffHeader[coincCounter] = * ( overflowGEBEv->ptgd[0] );

            memcpy ( buffData[coincCounter], overflowGEBEv->ptinp[0], overflowGEBEv->ptgd[0]->length );

            GEB_event->ptgd.push_back ( buffHeader[coincCounter] );
            GEB_event->ptinp.push_back ( buffData[coincCounter] );

            execParams->curTS = buffHeader[coincCounter]->timestamp;

            overflowGEBEv->ptgd.clear();
            overflowGEBEv->ptinp.clear();

            coincCounter++;
        }

        inData.read ( ( char* ) buffHeader[coincCounter], sizeof ( GEBDATA ) );

        if ( inData.gcount() != sizeof ( GEBDATA ) || inData.fail() )
        {
            printf ( "failed to read %lu bytes for header, got %li\n", sizeof ( GEBDATA ), inData.gcount() );
            return 1;
        }

        totBytesRead += sizeof ( GEBDATA );

        if ( GEB_event->ptgd.size() == 0 && execParams->CurEvNo <= execParams->NumToPrint )
        {
            printf ( "read initial payload of siz=%li\n", inData.gcount() );
            fflush ( stdout );

            printf ( "__ptgd[0]->type=%2i; ", buffHeader[coincCounter]->type );
            printf ( "ptgd[0]->length=%4i; ", buffHeader[coincCounter]->length );
            printf ( "ptgd[0]->timestamp=%lli\n", buffHeader[coincCounter]->timestamp );
            fflush ( stdout );
        }

        execParams->nbytes += inData.gcount();

        inData.read ( buffData[coincCounter], buffHeader[coincCounter]->length );

        if ( inData.gcount() != buffHeader[coincCounter]->length || inData.fail() )
        {
            printf ( "failed to read %i bytes for payload, got %li\n", buffHeader[coincCounter]->length, inData.gcount() );
            return 2;
        }

        totBytesRead += buffHeader[coincCounter]->length;

        execParams->nbytes += inData.gcount();

        if ( GEB_event->ptgd.size() == 0 ) execParams->curTS = buffHeader[coincCounter]->timestamp;

        TS = buffHeader[coincCounter]->timestamp;

        // -------- TRAP FOR BAD TIMESTAMP -------- //

        if ( TS < execParams->curTS )
        {
            if ( nbadTS < 100 )
            {
                std::cerr << "batflag:: TS<Pars.curTS, reset it at event # " << execParams->CurEvNo << "\n";
                std::cerr << "TS=" << TS << ", Pars.curTS=" << execParams->curTS << ", DT=" << TS - execParams->curTS << "\n";
                printf ( "batflag:: TS<Pars.curTS, reset it at event # %i\n", execParams->CurEvNo );
                printf ( "TS=%lli, Pars.curTS=%lli, DT=%lli\n", TS, execParams->curTS, TS - execParams->curTS );
                fflush ( stdout );
            }
            execParams->curTS = TS;
            if ( nbadTS < 100 )
            {
                printf ( "new Pars.curTS=%lli\n", execParams->curTS );
                printf ( "we have read %lli bytes so far\n", execParams->nbytes );
            }
            nbadTS++;

//             if ( nbadTS > 1000 )
//             {
//                 printf ( "too many bad TS, quit withe error code 3\n" );
//                 fflush ( stdout );
// //              return (3);
//             }
        }

        if ( ( long long ) ( TS - execParams->curTS ) < execParams->dTS )
        {
//             std::cerr << "..........................\n";
//             std::cerr << "Should push back in GEB_event:\n";
//             std::cerr << "---> type: " << buffHeader->type << "\n";
//             std::cerr << "---> length: " << buffHeader->length << "\n";
//             std::cerr << "---> timestamp: " << buffHeader->timestamp << "\n";

            GEB_event->ptgd.push_back ( buffHeader[coincCounter] );
            GEB_event->ptinp.push_back ( buffData[coincCounter] );

//             std::cerr << "Pushed back in GEB_event:\n";
//             std::cerr << "---> type: " << GEV_event->ptgd[GEV_event->ptgd.size()-1]->type << "\n";
//             std::cerr << "---> length: " << GEV_event->ptgd[GEV_event->ptgd.size()-1]->length << "\n";
//             std::cerr << "---> timestamp: " << GEV_event->ptgd[GEV_event->ptgd.size()-1]->timestamp << "\n";

            if ( execParams->CurEvNo <= execParams->NumToPrint || ( execParams->CurEvNo % execParams->modwrite == 0 ) )
            {
                printf ( "ev# %5i ", execParams->CurEvNo );
                char str[256];
                GebTypeStr ( buffHeader[coincCounter]->type, str );
                printf ( "%s ", str );
                printf ( "%4iBytes ", buffHeader[coincCounter]->length );
                printf ( "TS=%lli ", buffHeader[coincCounter]->timestamp );
                printf ( "curTS=%lli ", execParams->curTS );
                dTS = TS - execParams->curTS;
                printf ( "dTS= %lli\n", dTS );
                fflush ( stdout );
            }
        }
        else
        {
            overflowGEBEv->ptgd.push_back ( buffHeader[coincCounter] );
            overflowGEBEv->ptinp.push_back ( buffData[coincCounter] );
            break;
        }

        coincCounter++;
    }

    if ( coincCounter == MAXCOINEV )
    {
        std::cerr << "/!\\ WARNING: Maximum coincidence counter reached for event #" << execParams->CurEvNo << "\n";
    }

#if(DEBUG2)
    printf ( "complete event, next TS is %lli or  %lli out\n", TS, TS - execParams->curTS );
    printf ( "we found %i events in coincidence, timestamps are\n", GEV_event->ptgd.size() );
    for ( i = 0; i < GEV_event->ptgd.size(); i++ )
    {
        printf ( "[%i] TS=%lli\n", i, GEV_event->ptgd[i]->timestamp );
    }
    printf ( "we have read %lli bytes so far\n", execParams->nbytes );
    printf ( "GEV_event mult = %i\n", GEV_event->ptgd.size() );
    fflush ( stdout );
#endif

#if(DEBUG2)
    printf ( "GEBGetEv: done %i\n" );
    fflush ( stdout );
#endif

    return 0;
}

int SortManager::GEBacq ( char* ChatFileName )
{
    /* declarations */

    int NprintEvNo = 0, in, zero = 0;

    int st = 0, eov = 0, i1, i2, j, nret, siz;
    char str[256], str1[256];
    std::FILE* fp;
    time_t t1, t2;
    char* p, buffer[512];
    std::FILE* fp0;
    int ir[NUMAGATAPOS], dummy_i[NUMAGATAPOS];;
    double d1, nsec;
    float r1, r2, r3;
    long long int tcur = 0;
    unsigned int typehit[MAX_GEB_TYPE];
    std::FILE* TSfile;
    //  TH2F *dtbtev;//unused
    unsigned long long int firtsTSinEvent, dTS;

//  ConnectionRetryCount = 10;

    /* root spectra pointers */

    TH1* hhtemp;

    TList* zlist;
    TIterator* hiterator;

    TMapFile* mfile = NULL;

    printf ( "\n" );
    printf ( "executing UserDeclare.h code\n" );
    printf ( "\n" );

    /*-------*/
    /* Hello */
    /*-------*/

    printf ( "\n" );
    printf ( "GEBsort running on: " );
    time_stamp();
    printf ( "\n" );

    /*------------*/
    /* initialize */
    /*------------*/

    for ( int i = 0; i < MAX_GEB_TYPE; i++ )
    {
        typehit[i] = 0;
    }

    printf ( "\n" );
    printf ( "initializing\n" );
    printf ( "\n" );
    fflush ( stdout );

    if ( execParams->nEvents == 0 )
    {
        printf ( "Number of events to treat not been specified... Initialized to an arbitrary value of 2000000000" );
        printf ( "\n" );
    }

    printf ( "\n******** Number of Events which will be treated (max) : %llu **********\n", execParams->nEvents );

    execParams->nEvents = ( execParams->nEvents == 0 ) ? 2000000000 : execParams->nEvents;
    execParams->WeWereSignalled = FALSE; /* signal  */
    execParams->UseRootFile = FALSE;
    execParams->SizeShareMemFile = FALSE;
    execParams->firstEvent = 0;
    execParams->GSudpPort = 1101;
    execParams->NumToPrint = 25;
    execParams->DumpEvery = 10;
    execParams->dTS = 500;
    execParams->nbytes = 0;
    execParams->beta = 0;
    execParams->modwrite = 1000;
    execParams->tsnumwrites = 100;
    execParams->nocrystaltoworldrot = 0;
    execParams->multlo = 1;
    execParams->multhi = 20;
    execParams->requiretracked = 0;

    /* get the GRETINA rotation matrices */

    sprintf ( str, "crmat.LINUX" );
    in = open ( str, O_RDONLY, 0 );
    if ( in > 0 )
    {
        printf ( "%s is open (input) binary format\n", str );
    }
    else
    {
        printf ( "could not open %s\n", str );
        exit ( 1 );
    };
    siz = read ( in, ( char* ) execParams->crmat, sizeof ( execParams->crmat ) );
    printf ( "read %i bytes into execParams->crmat\n", siz );
    close ( in );

    /* get the AGATA rotational matrices */

    printf ( "read in AGATA rotation and translation data\n" );

    fp0 = fopen ( "AGATA_crmat.dat", "r" );
    if ( fp0 != NULL )
    {
        printf ( "AGATA_crmat.dat is open for reading\n" );

        j = 0;
        for ( int i = 0; i < 180; i++ )
        {
            memset ( buffer, zero, sizeof ( buffer ) );
            if ( !fgets ( buffer, 150, fp0 ) )
            {
                std::cerr << "ERROR WHILE READING AGATA_crmat.dat !!!!!" << std::endl;
                return -1;
            }

            sscanf ( buffer, "%i %i %lf %lf %lf ", ir, dummy_i, &execParams->TrX[j], &execParams->TrY[j], &execParams->TrZ[j] );

            memset ( buffer, zero, sizeof ( buffer ) );
            if ( !fgets ( buffer, 150, fp0 ) )
            {
                std::cerr << "ERROR WHILE READING AGATA_crmat.dat !!!!!" << std::endl;
                return -1;
            }
            sscanf ( buffer, "%i %lf %lf %lf  ", dummy_i, &execParams->rotxx[j], &execParams->rotxy[j], &execParams->rotxz[j] );

            memset ( buffer, zero, sizeof ( buffer ) );
            if ( !fgets ( buffer, 150, fp0 ) )
            {
                std::cerr << "ERROR WHILE READING AGATA_crmat.dat !!!!!" << std::endl;
                return -1;
            }
            sscanf ( buffer, "%i %lf %lf %lf  ", dummy_i, &execParams->rotyx[j], &execParams->rotyy[j], &execParams->rotyz[j] );

            memset ( buffer, zero, sizeof ( buffer ) );
            if ( !fgets ( buffer, 150, fp0 ) )
            {
                std::cerr << "ERROR WHILE READING AGATA_crmat.dat !!!!!" << std::endl;
                return -1;
            }
            sscanf ( buffer, "%i %lf %lf %lf  ", dummy_i, &execParams->rotzx[j], &execParams->rotzy[j], &execParams->rotzz[j] );

            j++;
        }
        printf ( "read %i AGATA rotational/translational matrices\n", j );
    }
    else
    {
        printf ( "Error: ascii AGATA_crmat.dat not found, quit\n" );
        exit ( 1 );
    };

//     for ( j = 0; j < 180; j++ )
//     {
//         printf ( "%2i: \n", j );
//         printf ( "Tr?: %10.5f %10.5f %10.5f\n", execParams->TrX[j], execParams->TrX[j], execParams->TrZ[j] );
//         printf ( "rx?: %10.5f %10.5f %10.5f\n", execParams->rotxx[j], execParams->rotxy[j], execParams->rotxz[j] );
//         printf ( "ry?: %10.5f %10.5f %10.5f\n", execParams->rotyx[j], execParams->rotyy[j], execParams->rotyz[j] );
//         printf ( "rz?: %10.5f %10.5f %10.5f\n", execParams->rotzx[j], execParams->rotzy[j], execParams->rotzz[j] );
//     }

    /*------------------*/
    /* read chat script */
    /*------------------*/

    GEBSort_read_chat ( ChatFileName );

    printf ( "checking proper input of chat file...\n" );
    if ( execParams->InputSrc == NOTDEF )
    {
        printf ( "you must specify an input source\n" );
        exit ( 1 );
    }

    else if ( execParams->InputSrc == DISK )
    {
        /* attempt to open input file */

        if ( !execParams->userFilter.empty() &&  execParams->userFilter != "none" )
        {
            execParams->cleanedMerged.open ( execParams->userFilter.c_str(), std::ios_base::out | std::ios_base::trunc );
        }

        inData.open ( execParams->GTSortInputFile, std::ios_base::in | std::ios_base::binary );
        if ( !inData.is_open() )
        {
            printf ( "could not open\"%s\"; quit\n", execParams->GTSortInputFile );
            exit ( 1 );
        }
        else
        {
            printf ( "input file \"%s\" is open\n", execParams->GTSortInputFile );
        }

        /* find the very first GEB header to find start TS */

        inData.read ( ( char* ) buffHeader[0], sizeof ( GEBDATA ) );

        printf ( "siz=%li;", inData.gcount() );
        printf ( "ptgd[i]->type=%2i; ", buffHeader[0]->type );
        printf ( "ptgd[i]->length=%4i; ", buffHeader[0]->length );
        printf ( "ptgd[i]->timestamp=%lli\n", buffHeader[0]->timestamp );
        fflush ( stdout );

        execParams->curTS = buffHeader[0]->timestamp;
        printf ( "start TS is %lli\n", execParams->curTS );
        std::cout << "position in file is " << inData.tellg() << "\n";

        /* reopen */

        inData.seekg ( 0, inData.beg );
        std::cout << "Setting back the initial position to 0: " << inData.tellg() << "\n";
    }


    else
    {
        printf ( "input source not recognized, quit\n" );
        return 1;
    };

    printf ( "input source is set up, supposedly\n" );

    /*---------------------*/
    /* other sanety checks */
    /*---------------------*/

    if ( execParams->InputSrc == NOTDEF )
    {
        printf ( "you must specify an input source!\n" );
        printf ( "quitting...\n" );
        return 1;
    };


    if ( execParams->UseShareMemFile && execParams->UseRootFile )
    {
        printf ( "you cannot use shared memory and a root disk\n" );
        printf ( "at the same time!\n" );
        return 1;
    };

    /* force user to declare intension with root file */
    /* so I can't be blamed for any overwrites!!      */

    if ( !execParams->UseShareMemFile )
        if ( ( p = strstr ( execParams->ROOTFileOption, "UNDEFINED" ) ) != NULL )
        {
            printf ( "for root files you must specify either:\n" );
            printf ( "\n" );
            printf ( "    ROOTFileOption RECREATE\n" );
            printf ( "or\n" );
            printf ( "    ROOTFileOption UPDATE\n" );
            printf ( "\n" );
            printf ( "please modify your chat file and try again\n" );
            return -1;
        };

    printf ( "\n" );
    printf ( "executing ShareMemFileUserInit.h code\n" );
    printf ( "\n" );

    /*-----------------------------------*/
    /* if we are going to use the        */
    /* shared map file, create it!       */
    /* be careful about the map address! */
    /*-----------------------------------*/

    if ( execParams->UseShareMemFile )
    {
        printf ( "\n" );

        if ( execParams->StartMapAddress != 0 )
        {
            TMapFile::SetMapAddress ( ( Long_t ) execParams->StartMapAddress );
            printf ( "shared mem start address set to 0x%8.8x\n", execParams->StartMapAddress );
        }
        else
        {
            printf ( "will use system default for shared mem start address\n" );
        }

        mfile = TMapFile::Create ( execParams->ShareMemFile, "RECREATE", execParams->SizeShareMemFile, "GS shared mem" );
        if ( mfile == NULL )
        {
            printf ( "failed to create TMapFile\n" );
            return -1;
        };

        printf ( "shared memory [%s] created, size: %s bytes\n", execParams->ShareMemFile, execParams->ShareMemFile );
        fflush ( stdout );
        //mfile->Print ();
        printf ( "\n" );
    }

    NprintEvNo = 0;
    execParams->CurEvNo = 0;

    if ( !execParams->ShareMemFile )
    {
        execParams->DumpEvery = 2000000000;
        printf ( "\n" );
        printf ( "_since rootfile: setting `execParams->DumpEvery` to infinity..!\n" );
        printf ( "\n" );
    };

    /* delete any command file */

    sprintf ( str, "\\rm -f %s", CommandFileName );
    if ( system ( str ) ) {}
    printf ( "deleted %s\n", str );

    gConfig = new GoddessConfig ( "goddess.position", ( string ) execParams->ConfigFile, execParams->sx3EnAdjustFile, execParams->qqq5EnAdjustFile );

    /*------------------------------------------*/
    /* if we are using root file, then either   */
    /* read in old rootfile or create a new one */
    /*------------------------------------------*/

    if ( !execParams->UseShareMemFile )
    {
        if ( execParams->UpdateRootFile )
        {
            /* check here whether the old root file exists */

            fp = fopen ( execParams->ROOTFile, "r" );
            if ( fp == NULL )
            {
                printf ( "could not open old rootfile: %s\n", execParams->ROOTFile );
                printf ( "the old rootfile must exist if you  \n" );
                printf ( "want to use the UPDATE option\n" );
                printf ( "aborting...\n" );
                return 0;
            };
            fclose ( fp );

            /* read in old root file */

            execParams->f1 = NULL;
            execParams->f1 = new TFile ( execParams->ROOTFile, "UPDATE" );
            printf ( "read old root file <%s>\n", execParams->ROOTFile );
            if ( !execParams->f1->IsOpen() )
            {
                printf ( "could not open file....\n\n" );
                return -1;
            };
            printf ( "base=<%s>\n", execParams->f1->GetPath() );
            //execParams->f1->Print ();
        }

        else
        {
            /* create the rootfile */

            execParams->f1 = NULL;
            execParams->f1 = new TFile ( execParams->ROOTFile, "RECREATE" );
            printf ( "root file <%s>\n", execParams->ROOTFile );
            if ( !execParams->f1->IsOpen() )
            {
                printf ( "could not open file....\n\n" );
                return -1;
            }
            printf ( "base=<%s>\n", execParams->f1->GetPath() );
            execParams->f1->SetCompressionLevel ( 0 );
            execParams->f1->Flush();
        }
    }

    /* update shared mem with minimal info       */
    /* so it is not empty before the first update */
    /* shared memory wellness checkpoint          */

    if ( execParams->UseShareMemFile )
    {
        printf ( "\n" );
        printf ( "Note: if the command below fails,\n" );
        printf ( "increase the shared memory size!\n" );
        printf ( "\n" );
        printf ( "updating empty shared mem file... " );
        fflush ( stdout );
        //      mfile->Update ();
        UPDSSHMEM ( t1, t2, mfile, execParams->ShareMemFile );
        printf ( "Done!\n" );
        printf ( "\n" );
        fflush ( stdout );
    };

    TSfile = fopen ( "TS.list", "w" );

    /*--------------------------------*/
    /* setup the root spectra we need */
    /*--------------------------------*/

    if ( !execParams->noHists )
    {
        execParams->f1->cd();

        execParams->histDir = execParams->f1->mkdir ( "hists" );
        execParams->treeDir = execParams->f1->mkdir ( "trees" );
        execParams->f1->Write ( 0, TObject::kWriteDelete );
        execParams->histDir->cd();

        execParams->histDir->cd();
    }
    /* spectra for different types of data */


    sup_dgs();
    if ( !execParams->noHists ) execParams->histDir->cd();
//     //sup_dfma ();
//     //execParams->histDir->cd();
    sup_dgod();
    if ( !execParams->noHists ) execParams->histDir->cd();
    sup_agod();
    if ( !execParams->noHists ) execParams->histDir->cd();
    sup_god();
    if ( !execParams->noHists ) execParams->histDir->cd();
//     //sup_phoswich ();
//     sup_template();

    if ( !execParams->noHists ) execParams->f1->SetCompressionLevel ( 0 );
    if ( !execParams->noHists ) execParams->histDir->Write ( 0, TObject::kOverwrite );
    if ( !execParams->noHists ) execParams->f1->Flush();

    printf ( "we have define the following ROOT spectra:\n" );


    execParams->wlist = gDirectory->GetList();

    /* azi only in detector systems for now... */

    if ( execParams->AGATA_data == 0 )
    {
        /* find the detector angles from crmat */

        printf ( "GRETINA detector angles\n" );

        for ( int i = 1; i <= MAXGTMODNO; i++ )
            for ( j = 0; j < 4; j++ )
            {
                printf ( "mod %2i, crystal %1i [%3i]: ", i, j, 4 * i + j );
                printf ( "(%6.2f ", execParams->crmat[i][j][0][3] );
                printf ( "%6.2f ", execParams->crmat[i][j][1][3] );
                printf ( "%6.2f) ", execParams->crmat[i][j][2][3] );

                r1 = execParams->crmat[i][j][0][3] * execParams->crmat[i][j][0][3] +
                     +execParams->crmat[i][j][1][3] * execParams->crmat[i][j][1][3] + +execParams->crmat[i][j][2][3] * execParams->crmat[i][j][2][3];
                r1 = sqrtf ( r1 );
                r2 = execParams->beamdir[0] * execParams->crmat[i][j][0][3] / r1
                     + execParams->beamdir[1] * execParams->crmat[i][j][1][3] / r1 + execParams->beamdir[2] * execParams->crmat[i][j][2][3] / r1;
                execParams->modCCang[i][j] = acosf ( r2 );
                printf ( "pol %7.2f ,  ", execParams->modCCang[i][j] / M_PI * 180 );
                r3 = atan2f ( execParams->crmat[i][j][1][3], execParams->crmat[i][j][2][3] );
                printf ( "azi %7.2f; ", r3 / M_PI * 180 );

                r1 = 1.0 - execParams->beta * execParams->beta;
                execParams->modCCdopfac[4 * i + j] = sqrtf ( r1 ) / ( 1.0 - execParams->beta * cosf ( execParams->modCCang[i][j] ) );

                printf ( "modCCdopfac %6.4f", execParams->modCCdopfac[4 * i + j] );
                printf ( "\n" );
            }
    }

    else if ( execParams->AGATA_data == 1 )
    {
        printf ( "AGATA detector angles\n" );

        for ( int i = 0; i < 180; i++ )
        {
            r1 = execParams->TrX[i] * execParams->TrX[i] + execParams->TrY[i] * execParams->TrY[i] + execParams->TrZ[i] * execParams->TrZ[i];
            r1 = sqrtf ( r1 );
            printf ( "%3i: %10.5f %10.5f %10.5f; ", i, execParams->TrX[i], execParams->TrY[i], execParams->TrZ[i] );

            r2 = execParams->beamdir[0] * execParams->TrX[i] / r1 + execParams->beamdir[1] * execParams->TrY[i] / r1 + execParams->beamdir[2] * execParams->TrZ[i] / r1;
            if ( r2 < -1.0 || r2 > 1.0 )
            {
                printf ( "r2 out of range=%f\n", r2 );
                exit ( 1 );
            };
            i1 = i / 3;
            i2 = i - i1;
            //          printf ("[%f %f] ", r2, acosf (r2)/ M_PI * 180);
            execParams->modCCang[i1][i2] = acosf ( r2 );
            printf ( "pol %7.2f , ", execParams->modCCang[i1][i2] / M_PI * 180 );
            r3 = atan2f ( execParams->TrY[i], execParams->TrX[i] );
            printf ( "azi %7.2f; ", r3 / M_PI * 180 );

            r1 = 1.0 - execParams->beta * execParams->beta;
            execParams->modCCdopfac[i] = sqrtf ( r1 ) / ( 1.0 - execParams->beta * cosf ( execParams->modCCang[i1][i2] ) );

            printf ( "modCCdopfac %6.4f", execParams->modCCdopfac[i] );
            printf ( "\n" );

        }

//         printf ( "\ntable\n\n" );
//         r1 = 0;
//         while ( r1 <= M_PI )
//         {
//             r2 = cosf ( r1 );
//             printf ( "r1=%frad %fdeg, cosf(r1)=r2=%f, acosf(r2)=%f\n", r1, r1 * 57.2958, r2, acosf ( r2 ) );
//             r1 += M_PI / 100.0;
//         }
    }

    /*----------------------*/
    /* setup signal catcher */
    /*----------------------*/

#ifdef LINUX
    signal ( SIGHUP, signal_catcher );
#endif
#ifdef SOLARIS
    sigset ( SIGHUP, signal_catcher );
#endif
    printf ( "setup signal catcher\n" );

    /*---------------*/
    /* start sorting */
    /*---------------*/

    printf ( "started sorting... " );
    if ( execParams->InputSrc == DISK )
    {
        printf ( "from disk...\n" );
    }
    else if ( execParams->InputSrc == GEB )
    {
        printf ( "from GEB...\n" );
    }
    else if ( execParams->InputSrc == NET )
    {
        printf ( "from net... SHOULD NOT HAPPEN\n" );
        exit ( 1 );
    };
    printf ( "\n" );
    fflush ( stdout );

    int userFlagedEvtCounter = 0;

    tdmplast = time ( NULL );

    unsigned long long int totBinSize = 0;

    inData.seekg ( 0, inData.end );

    totBinSize = inData.tellg();

    inData.seekg ( 0, inData.beg );

    totBytesRead = 0;

    while ( ( execParams->CurEvNo - execParams->firstEvent ) < execParams->nEvents && !inData.eof() )
    {
        /*----------------*/
        /* get next event */
        /*----------------*/

#if(0)
        printf ( "calling GEBGetEv, execParams->CurEvNo=%i\n", execParams->CurEvNo );
#endif

//         std::cerr << "========================= Entering GEBGetEv =========================\n";

        st = GEBGetEv ( );

//         std::cerr << "------- Exiting GEBGetEv -------\n";
//         for ( int i = 0; i < GEB_event->ptgd.size(); i++ )
//         {
//             std::cerr << "---> type: " << GEB_event->ptgd[i]->type << "\n";
//             std::cerr << "---> length: " << GEB_event->ptgd[i]->length << "\n";
//             std::cerr << "---> timestamp: " << GEB_event->ptgd[i]->timestamp << "\n";
//             std::cerr << "....................\n";
//         }


//         printf ( "st=%i\n", st );
//         printf ( "GEB_event mult =%i\n", GEB_event->ptgd.size() );
//         fflush ( stdout );
//         if ( 1 )
//         {
//             exit ( 0 );
//         }

        if ( GEB_event->ptgd.size() > 0 )
        {
            tcur = GEB_event->ptgd[0]->timestamp;

            /* count data types */

            firtsTSinEvent = LLONG_MAX;

            for ( unsigned int i = 0; i < GEB_event->ptgd.size(); i++ )
            {
                if ( execParams->CurEvNo < execParams->tsnumwrites )
                {
                    if ( i == 0 )
                    {
                        fprintf ( TSfile, "\n" );
                    }

                    GebTypeStr ( GEB_event->ptgd[i]->type, str );
                    fprintf ( TSfile, "%4i/%2i: (%2i,%s) TS=%20lli; ", execParams->CurEvNo, i, GEB_event->ptgd[i]->type, str,
                              GEB_event->ptgd[i]->timestamp );

                    fprintf ( TSfile, "dT=%lli\n", GEB_event->ptgd[i]->timestamp - TSprev );

                    TSprev = GEB_event->ptgd[i]->timestamp;
                }

                if ( GEB_event->ptgd[i]->type > 0 && GEB_event->ptgd[i]->type < MAX_GEB_TYPE )
                {
                    typehit[GEB_event->ptgd[i]->type]++;
                }

                if ( GEB_event->ptgd[i]->timestamp < firtsTSinEvent )
                {
                    firtsTSinEvent = GEB_event->ptgd[i]->timestamp;
                }
            }

            /* fill dtbtev spectrum */

            for ( unsigned int i = 0; i < GEB_event->ptgd.size(); i++ )
            {
                dTS = GEB_event->ptgd[i]->timestamp - firtsTSinEvent;
                d1 = ( double ) dTS;
                //if (d1 >= (double) 0 && d1 < RATELEN)
                //dtbtev->Fill (d1, GEB_event.ptgd[i]->type, 1);
            }

            /* statistics */

            execParams->CurEvNo++;
            NprintEvNo++;

            if ( execParams->CurEvNo <= execParams->NumToPrint )
            {
                printf ( "GEBGetEv returned st=%i\n", st );
                printf ( "we have read %lli bytes; ", execParams->nbytes );
                printf ( "CurEvNo=%i\n", execParams->CurEvNo );
                fflush ( stdout );
            }

            /* debug print some events */

            if ( execParams->CurEvNo <= execParams->NumToPrint )
            {
                printf ( "\n+++++++++++++++++++++++++++++++\n" );
                printf ( "*start event # %i with multiplicity %lu looks like this:\n", execParams->CurEvNo, GEB_event->ptgd.size() );
                for ( unsigned int i = 0; i < GEB_event->ptgd.size(); i++ )
                {
                    GebTypeStr ( GEB_event->ptgd[i]->type, str );
                    printf ( "%2i> %2i, %s, TS=%lli\n", i, GEB_event->ptgd[i]->type, str, GEB_event->ptgd[i]->timestamp );
                }
            }

//             printf ( "debug quit\n" );
//             exit ( 0 );

            if ( execParams->CurEvNo <= execParams->NumToPrint )
            {
                printf ( "*end of event # %i\n", execParams->CurEvNo );
                printf ( "+++++++++++++++++++++++++++++++\n" );
            }

            bin_dgs ( GEB_event );
            bin_dgod ( GEB_event );
            bin_agod ( GEB_event );

            if ( bin_god ( GEB_event ) )
            {
                userFlagedEvtCounter++;

                if ( execParams->userFilter != "none" )
                {
                    for ( unsigned int i = 0; i < GEB_event->ptgd.size(); i++ )
                    {
                        execParams->cleanedMerged.write ( ( char* ) GEB_event->ptgd[i], sizeof ( GEBDATA ) );
                        execParams->cleanedMerged.write ( GEB_event->ptinp[i], GEB_event->ptgd[i]->length );
                    }
                }
            }
        }
        //    assert (execParams->InputSrc == DISK);

        /*---------------------*/
        /* house keeping...... */
        /* done every so often */
        /*---------------------*/

        if ( execParams->CurEvNo % 10000 == 0 )
        {
            std::cerr << "Event: " << std::left << std::setw ( 12 ) << execParams->CurEvNo << " / Bytes read: " << std::setw ( 13 ) << totBytesRead << " out of " << std::setw ( 13 ) << totBinSize;
            std::cerr << " ( " << std::right << std::setw ( 6 ) << std::setprecision ( 2 ) << std::fixed << ( float ) totBytesRead/totBinSize * 100. << " % )\r" << std::flush;
            /* calc time since last dump */

            tdmp = time ( NULL );
            tdmp -= tdmplast;
        }

        /*-----------------------------------------------------------*/
        /* dump all spectra on signal or dump every execParams->DumpEvery events */
        /* or respond to 'interactive' command...................... */
        /*-----------------------------------------------------------*/

        if ( execParams->WeWereSignalled || ( int ) tdmp >= execParams->DumpEvery )
        {
            /* disarm signal */

            execParams->WeWereSignalled = FALSE;

            /* check for command file */

            fp = fopen ( CommandFileName, "r" );
            if ( fp != NULL )
            {

                printf ( "found command file: %s\n", CommandFileName );
                if ( fgets ( str, STRLEN, fp ) ) {}
                printf ( "with command: %s\n", str );

                if ( ( p = strstr ( str, "DumpEvery" ) ) != NULL )
                {

                    sscanf ( str, "%s %i", str1, &execParams->DumpEvery );
                    printf ( "will dump to output file every %i minutes\n", execParams->DumpEvery );
                    fflush ( stdout );

                }
                else if ( ( p = strstr ( str, "printevents" ) ) != NULL )
                {
                    /* reset print event counter */

                    nret = sscanf ( str, "%s %i", str1, &i1 );
                    if ( nret == 2 )
                    {
                        execParams->NumToPrint = i1;
                    }
                    printf ( "will print %i events\n", execParams->NumToPrint );
                    NprintEvNo = 0;

                }
                else if ( ( p = strstr ( str, "status" ) ) != NULL )
                {

                    ShowStatus();


                }
                else if ( ( p = strstr ( str, "stopsort" ) ) != NULL )
                {
                    /* simulate end of event to stop sort */

                    eov = 1;

                }
                else if ( ( p = strstr ( str, "zapall" ) ) != NULL )
                {

                    /* zap spectra */
                    if ( execParams->UseShareMemFile )
                    {
                        zlist = mfile->GetDirectory()->GetList();
                        hiterator = zlist->MakeIterator();
                        while ( ( hhtemp = ( TH1* ) hiterator->Next() ) )
                        {
                            hhtemp->Reset();
                        }
                        printf ( "all spectra were zapped @ " );
                        time_stamp();
                        fflush ( stdout );

                        /* update */

                        printf ( "updating shared mem... " );
                        UPDSSHMEM ( t1, t2, mfile, execParams->ShareMemFile );;
                    }
                    else
                    {
                        /* do nothing */
                    }
                }
                else if ( ( p = strstr ( str, "zap" ) ) != NULL )
                {
                    /* extract spectrum name */

                    sscanf ( str, "%s %s", str1, execParams->spname );
                    hhtemp = ( TH1D* ) gROOT->FindObject ( execParams->spname );
                    if ( execParams->UseShareMemFile )
                    {
                        hhtemp = ( TH1* ) mfile->Remove ( execParams->spname );
                        if ( hhtemp != NULL )
                        {
                            //hhtemp->Print ();
                            hhtemp->Reset();
                            mfile->Add ( hhtemp, execParams->spname );
                            mfile->Update ( hhtemp );
                        }
                        printf ( "spectrum %s zapped @ ", execParams->spname );
                        time_stamp();
                        fflush ( stdout );
                        /* update */
                    }
                    else
                    {
                        /* do nothing */
                    };

                }
                else
                {
                    printf ( "command not understood\n" );
                }

                /* delete command file */

                fclose ( fp );
                sprintf ( str, "\\rm %s", CommandFileName );
                if ( system ( str ) ) {}
                printf ( "%s\n", str );

            }
            else
            {
                printf ( "\"%s\" was not found\n", CommandFileName );

                /* update sh mem or writeout root file */

                printf ( "time since last dump: %i second(s)\n", ( int ) tdmp );
                tdmp = 0;
                if ( !execParams->UseShareMemFile )
                {
                    printf ( "Writing ROOT file\n" );
                    if ( !execParams->noHists ) execParams->histDir->Write ( 0, TObject::kOverwrite );
                    //execParams->treeDir->Write(0,TObject::kWriteDelete);
                    execParams->f1->Flush();

                }

                else
                {
                    printf ( "updating shared mem... " );

                    UPDSSHMEM ( t1, t2, mfile, execParams->ShareMemFile );;
                    ShowStatus();
                }

                tdmplast = time ( NULL );
            }

            printf ( "continuing the sort...\n" );
            fflush ( stdout );
        }
    }

    std::cerr << "\n";

    std::cout << "\nTerminating Sorting Process because ";

    if ( ( execParams->CurEvNo - execParams->firstEvent ) >= execParams->nEvents ) std::cout << "we treated " << execParams->CurEvNo << " out of " << execParams->nEvents << "\n";
    else if ( !inData.eof() ) std::cout << "we reached the end of the file...\n";

    std::cout << "we have read "<< execParams->nbytes << "bytes\n";
    std::cout << "CurEvNo = " << execParams->CurEvNo << "\n";
    fflush ( stdout );

    /* terminate sort */

    std::cerr << "GEBSort done treating " << execParams->CurEvNo << " events...\n";
    std::cerr << userFlagedEvtCounter << " events fulfilled the user filter(s)...\n";

    /*-----------------------*/
    /* we are done sorting!! */
    /* save all ROOT spectra */
    /*-----------------------*/

    printf ( "\n" );
    printf ( "Sorting is done\n" );
    printf ( "attempting to save root or map file\n" );
    printf ( "\n" );
    fflush ( stdout );

    if ( execParams->InputSrc == DISK )
    {
        inData.close();
    }
    else if ( execParams->InputSrc == GEB )
    {

    }

    printf ( "\n" );
    fflush ( stdout );

    sprintf ( str, "sumTrackE.spe" );

    /* if we were using shared memory */

    if ( execParams->UseShareMemFile )
    {
        //UPDSSHMEM mfile->Print ();
        //printf ("\n");
        //mfile->ls ();
        //printf ("\n");
    };

    /* if we were using rootfile */

    if ( !execParams->UseShareMemFile )
    {
        printf ( "attempting to close root file...\n" );
        fflush ( stdout );
        execParams->f1->SetCompressionLevel ( 1 );

        if ( !execParams->noHists )
        {
            execParams->histDir->Write ( 0, TObject::kOverwrite );
            execParams->treeDir->Write ( 0, TObject::kWriteDelete );
        }

        execParams->f1->Write ( 0, TObject::kWriteDelete );

        execParams->f1->Flush();
        execParams->f1->Close();
        execParams->histDir = 0;
        execParams->treeDir = 0;
        printf ( "done saving rootfile \"%s\n\n", execParams->ROOTFile );
        fflush ( stdout );

        if ( execParams->cleanedMerged.is_open() ) execParams->cleanedMerged.close();
    }
    printf ( "\n" );


    /*-------------------------*/
    /* print simple statistics */
    /*-------------------------*/

    ShowStatus();

    //exit_dfma();

    /* done */

    printf ( "\n" );
    printf ( "sorted timestamp range %lli-->%lli: %lli\n", t0, tcur, tcur - t0 );
    d1 = ( double ) ( tcur - t0 );
    d1 /= 100000000;
    printf ( "that is %.1f seconds or ", ( float ) d1 );
    nsec = d1;
    i1 = ( unsigned int ) d1 / 3600;
    d1 -= i1 * 3600;
    i2 = ( unsigned int ) d1 / 60;
    d1 -= i2 * 60;
    printf ( "%ih%im%is\n", i1, i2, ( int ) d1 );
    printf ( "^^^^^ any timestamp jumps will upset this accounting\n" );
    printf ( "\n" );

    printf ( "hit statistics per type\n" );
    i1 = 0;
    for ( int i = 1; i < MAX_GEB_TYPE; i++ )
        if ( typehit[i] > 0 )
        {
            GebTypeStr ( i, str );
            printf ( "%2i %s %10i ;", i, str, typehit[i] );
            i1 += typehit[i];
            d1 = ( double ) typehit[i] / nsec;
            printf ( " %9.2f Hz ", ( float ) d1 );
            printf ( "\n" );
        };
    printf ( "read a total of              %i ; header/payloads\n", i1 );
    printf ( "\n" );

    printf ( "\n" );
    printf ( "nn1=%i\n", nn1 );
    printf ( "nn2=%i\n", nn2 );
    printf ( "nn3=%i\n", nn3 );
    printf ( "\n" );

//     exit_mode2();

    printf ( "\n ** GEBSort is done at " );
    time_stamp();
    printf ( "\n" );
    return ( 0 );

}

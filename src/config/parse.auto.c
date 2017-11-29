/***********************************************************************************************************************************
Option Parse Definition

Automatically generated by Build.pm -- do not modify directly.
***********************************************************************************************************************************/

/***********************************************************************************************************************************
Option parse data
***********************************************************************************************************************************/
static const struct option optionList[] =
{
    {
        .name = "archive-async",
        .val = PARSE_OPTION_OFFSET + cfgOptArchiveAsync,
    },
    {
        .name = "no-archive-async",
        .val = PARSE_OPTION_OFFSET + cfgOptArchiveAsync,
    },
    {
        .name = "archive-check",
        .val = PARSE_OPTION_OFFSET + cfgOptArchiveCheck,
    },
    {
        .name = "no-archive-check",
        .val = PARSE_OPTION_OFFSET + cfgOptArchiveCheck,
    },
    {
        .name = "archive-copy",
        .val = PARSE_OPTION_OFFSET + cfgOptArchiveCopy,
    },
    {
        .name = "no-archive-copy",
        .val = PARSE_OPTION_OFFSET + cfgOptArchiveCopy,
    },
    {
        .name = "archive-queue-max",
        .has_arg = required_argument,
        .val = PARSE_OPTION_OFFSET + cfgOptArchiveQueueMax,
    },
    {
        .name = "archive-timeout",
        .has_arg = required_argument,
        .val = PARSE_OPTION_OFFSET + cfgOptArchiveTimeout,
    },
    {
        .name = "backup-cmd",
        .has_arg = required_argument,
        .val = PARSE_OPTION_OFFSET + cfgOptBackupCmd,
    },
    {
        .name = "backup-config",
        .has_arg = required_argument,
        .val = PARSE_OPTION_OFFSET + cfgOptBackupConfig,
    },
    {
        .name = "backup-host",
        .has_arg = required_argument,
        .val = PARSE_OPTION_OFFSET + cfgOptBackupHost,
    },
    {
        .name = "backup-ssh-port",
        .has_arg = required_argument,
        .val = PARSE_OPTION_OFFSET + cfgOptBackupSshPort,
    },
    {
        .name = "backup-standby",
        .val = PARSE_OPTION_OFFSET + cfgOptBackupStandby,
    },
    {
        .name = "no-backup-standby",
        .val = PARSE_OPTION_OFFSET + cfgOptBackupStandby,
    },
    {
        .name = "backup-user",
        .has_arg = required_argument,
        .val = PARSE_OPTION_OFFSET + cfgOptBackupUser,
    },
    {
        .name = "buffer-size",
        .has_arg = required_argument,
        .val = PARSE_OPTION_OFFSET + cfgOptBufferSize,
    },
    {
        .name = "checksum-page",
        .val = PARSE_OPTION_OFFSET + cfgOptChecksumPage,
    },
    {
        .name = "no-checksum-page",
        .val = PARSE_OPTION_OFFSET + cfgOptChecksumPage,
    },
    {
        .name = "cmd-ssh",
        .has_arg = required_argument,
        .val = PARSE_OPTION_OFFSET + cfgOptCmdSsh,
    },
    {
        .name = "command",
        .has_arg = required_argument,
        .val = PARSE_OPTION_OFFSET + cfgOptCommand,
    },
    {
        .name = "compress",
        .val = PARSE_OPTION_OFFSET + cfgOptCompress,
    },
    {
        .name = "no-compress",
        .val = PARSE_OPTION_OFFSET + cfgOptCompress,
    },
    {
        .name = "compress-level",
        .has_arg = required_argument,
        .val = PARSE_OPTION_OFFSET + cfgOptCompressLevel,
    },
    {
        .name = "compress-level-network",
        .has_arg = required_argument,
        .val = PARSE_OPTION_OFFSET + cfgOptCompressLevelNetwork,
    },
    {
        .name = "config",
        .has_arg = required_argument,
        .val = PARSE_OPTION_OFFSET + cfgOptConfig,
    },
    {
        .name = "no-config",
        .val = PARSE_OPTION_OFFSET + cfgOptConfig,
    },
    {
        .name = "db-cmd",
        .has_arg = required_argument,
        .val = PARSE_OPTION_OFFSET + cfgOptDbCmd,
    },
    {
        .name = "db1-cmd",
        .has_arg = required_argument,
        .val = PARSE_OPTION_OFFSET + cfgOptDbCmd,
    },
    {
        .name = "db2-cmd",
        .has_arg = required_argument,
        .val = PARSE_OPTION_OFFSET + cfgOptDbCmd + 1,
    },
    {
        .name = "db3-cmd",
        .has_arg = required_argument,
        .val = PARSE_OPTION_OFFSET + cfgOptDbCmd + 2,
    },
    {
        .name = "db4-cmd",
        .has_arg = required_argument,
        .val = PARSE_OPTION_OFFSET + cfgOptDbCmd + 3,
    },
    {
        .name = "db5-cmd",
        .has_arg = required_argument,
        .val = PARSE_OPTION_OFFSET + cfgOptDbCmd + 4,
    },
    {
        .name = "db6-cmd",
        .has_arg = required_argument,
        .val = PARSE_OPTION_OFFSET + cfgOptDbCmd + 5,
    },
    {
        .name = "db7-cmd",
        .has_arg = required_argument,
        .val = PARSE_OPTION_OFFSET + cfgOptDbCmd + 6,
    },
    {
        .name = "db8-cmd",
        .has_arg = required_argument,
        .val = PARSE_OPTION_OFFSET + cfgOptDbCmd + 7,
    },
    {
        .name = "db-config",
        .has_arg = required_argument,
        .val = PARSE_OPTION_OFFSET + cfgOptDbConfig,
    },
    {
        .name = "db1-config",
        .has_arg = required_argument,
        .val = PARSE_OPTION_OFFSET + cfgOptDbConfig,
    },
    {
        .name = "db2-config",
        .has_arg = required_argument,
        .val = PARSE_OPTION_OFFSET + cfgOptDbConfig + 1,
    },
    {
        .name = "db3-config",
        .has_arg = required_argument,
        .val = PARSE_OPTION_OFFSET + cfgOptDbConfig + 2,
    },
    {
        .name = "db4-config",
        .has_arg = required_argument,
        .val = PARSE_OPTION_OFFSET + cfgOptDbConfig + 3,
    },
    {
        .name = "db5-config",
        .has_arg = required_argument,
        .val = PARSE_OPTION_OFFSET + cfgOptDbConfig + 4,
    },
    {
        .name = "db6-config",
        .has_arg = required_argument,
        .val = PARSE_OPTION_OFFSET + cfgOptDbConfig + 5,
    },
    {
        .name = "db7-config",
        .has_arg = required_argument,
        .val = PARSE_OPTION_OFFSET + cfgOptDbConfig + 6,
    },
    {
        .name = "db8-config",
        .has_arg = required_argument,
        .val = PARSE_OPTION_OFFSET + cfgOptDbConfig + 7,
    },
    {
        .name = "db-host",
        .has_arg = required_argument,
        .val = PARSE_OPTION_OFFSET + cfgOptDbHost,
    },
    {
        .name = "db1-host",
        .has_arg = required_argument,
        .val = PARSE_OPTION_OFFSET + cfgOptDbHost,
    },
    {
        .name = "db2-host",
        .has_arg = required_argument,
        .val = PARSE_OPTION_OFFSET + cfgOptDbHost + 1,
    },
    {
        .name = "db3-host",
        .has_arg = required_argument,
        .val = PARSE_OPTION_OFFSET + cfgOptDbHost + 2,
    },
    {
        .name = "db4-host",
        .has_arg = required_argument,
        .val = PARSE_OPTION_OFFSET + cfgOptDbHost + 3,
    },
    {
        .name = "db5-host",
        .has_arg = required_argument,
        .val = PARSE_OPTION_OFFSET + cfgOptDbHost + 4,
    },
    {
        .name = "db6-host",
        .has_arg = required_argument,
        .val = PARSE_OPTION_OFFSET + cfgOptDbHost + 5,
    },
    {
        .name = "db7-host",
        .has_arg = required_argument,
        .val = PARSE_OPTION_OFFSET + cfgOptDbHost + 6,
    },
    {
        .name = "db8-host",
        .has_arg = required_argument,
        .val = PARSE_OPTION_OFFSET + cfgOptDbHost + 7,
    },
    {
        .name = "db-include",
        .has_arg = required_argument,
        .val = PARSE_OPTION_OFFSET + cfgOptDbInclude,
    },
    {
        .name = "db-path",
        .has_arg = required_argument,
        .val = PARSE_OPTION_OFFSET + cfgOptDbPath,
    },
    {
        .name = "db1-path",
        .has_arg = required_argument,
        .val = PARSE_OPTION_OFFSET + cfgOptDbPath,
    },
    {
        .name = "db2-path",
        .has_arg = required_argument,
        .val = PARSE_OPTION_OFFSET + cfgOptDbPath + 1,
    },
    {
        .name = "db3-path",
        .has_arg = required_argument,
        .val = PARSE_OPTION_OFFSET + cfgOptDbPath + 2,
    },
    {
        .name = "db4-path",
        .has_arg = required_argument,
        .val = PARSE_OPTION_OFFSET + cfgOptDbPath + 3,
    },
    {
        .name = "db5-path",
        .has_arg = required_argument,
        .val = PARSE_OPTION_OFFSET + cfgOptDbPath + 4,
    },
    {
        .name = "db6-path",
        .has_arg = required_argument,
        .val = PARSE_OPTION_OFFSET + cfgOptDbPath + 5,
    },
    {
        .name = "db7-path",
        .has_arg = required_argument,
        .val = PARSE_OPTION_OFFSET + cfgOptDbPath + 6,
    },
    {
        .name = "db8-path",
        .has_arg = required_argument,
        .val = PARSE_OPTION_OFFSET + cfgOptDbPath + 7,
    },
    {
        .name = "db-port",
        .has_arg = required_argument,
        .val = PARSE_OPTION_OFFSET + cfgOptDbPort,
    },
    {
        .name = "db1-port",
        .has_arg = required_argument,
        .val = PARSE_OPTION_OFFSET + cfgOptDbPort,
    },
    {
        .name = "db2-port",
        .has_arg = required_argument,
        .val = PARSE_OPTION_OFFSET + cfgOptDbPort + 1,
    },
    {
        .name = "db3-port",
        .has_arg = required_argument,
        .val = PARSE_OPTION_OFFSET + cfgOptDbPort + 2,
    },
    {
        .name = "db4-port",
        .has_arg = required_argument,
        .val = PARSE_OPTION_OFFSET + cfgOptDbPort + 3,
    },
    {
        .name = "db5-port",
        .has_arg = required_argument,
        .val = PARSE_OPTION_OFFSET + cfgOptDbPort + 4,
    },
    {
        .name = "db6-port",
        .has_arg = required_argument,
        .val = PARSE_OPTION_OFFSET + cfgOptDbPort + 5,
    },
    {
        .name = "db7-port",
        .has_arg = required_argument,
        .val = PARSE_OPTION_OFFSET + cfgOptDbPort + 6,
    },
    {
        .name = "db8-port",
        .has_arg = required_argument,
        .val = PARSE_OPTION_OFFSET + cfgOptDbPort + 7,
    },
    {
        .name = "db-socket-path",
        .has_arg = required_argument,
        .val = PARSE_OPTION_OFFSET + cfgOptDbSocketPath,
    },
    {
        .name = "db1-socket-path",
        .has_arg = required_argument,
        .val = PARSE_OPTION_OFFSET + cfgOptDbSocketPath,
    },
    {
        .name = "db2-socket-path",
        .has_arg = required_argument,
        .val = PARSE_OPTION_OFFSET + cfgOptDbSocketPath + 1,
    },
    {
        .name = "db3-socket-path",
        .has_arg = required_argument,
        .val = PARSE_OPTION_OFFSET + cfgOptDbSocketPath + 2,
    },
    {
        .name = "db4-socket-path",
        .has_arg = required_argument,
        .val = PARSE_OPTION_OFFSET + cfgOptDbSocketPath + 3,
    },
    {
        .name = "db5-socket-path",
        .has_arg = required_argument,
        .val = PARSE_OPTION_OFFSET + cfgOptDbSocketPath + 4,
    },
    {
        .name = "db6-socket-path",
        .has_arg = required_argument,
        .val = PARSE_OPTION_OFFSET + cfgOptDbSocketPath + 5,
    },
    {
        .name = "db7-socket-path",
        .has_arg = required_argument,
        .val = PARSE_OPTION_OFFSET + cfgOptDbSocketPath + 6,
    },
    {
        .name = "db8-socket-path",
        .has_arg = required_argument,
        .val = PARSE_OPTION_OFFSET + cfgOptDbSocketPath + 7,
    },
    {
        .name = "db-ssh-port",
        .has_arg = required_argument,
        .val = PARSE_OPTION_OFFSET + cfgOptDbSshPort,
    },
    {
        .name = "db1-ssh-port",
        .has_arg = required_argument,
        .val = PARSE_OPTION_OFFSET + cfgOptDbSshPort,
    },
    {
        .name = "db2-ssh-port",
        .has_arg = required_argument,
        .val = PARSE_OPTION_OFFSET + cfgOptDbSshPort + 1,
    },
    {
        .name = "db3-ssh-port",
        .has_arg = required_argument,
        .val = PARSE_OPTION_OFFSET + cfgOptDbSshPort + 2,
    },
    {
        .name = "db4-ssh-port",
        .has_arg = required_argument,
        .val = PARSE_OPTION_OFFSET + cfgOptDbSshPort + 3,
    },
    {
        .name = "db5-ssh-port",
        .has_arg = required_argument,
        .val = PARSE_OPTION_OFFSET + cfgOptDbSshPort + 4,
    },
    {
        .name = "db6-ssh-port",
        .has_arg = required_argument,
        .val = PARSE_OPTION_OFFSET + cfgOptDbSshPort + 5,
    },
    {
        .name = "db7-ssh-port",
        .has_arg = required_argument,
        .val = PARSE_OPTION_OFFSET + cfgOptDbSshPort + 6,
    },
    {
        .name = "db8-ssh-port",
        .has_arg = required_argument,
        .val = PARSE_OPTION_OFFSET + cfgOptDbSshPort + 7,
    },
    {
        .name = "db-timeout",
        .has_arg = required_argument,
        .val = PARSE_OPTION_OFFSET + cfgOptDbTimeout,
    },
    {
        .name = "db-user",
        .has_arg = required_argument,
        .val = PARSE_OPTION_OFFSET + cfgOptDbUser,
    },
    {
        .name = "db1-user",
        .has_arg = required_argument,
        .val = PARSE_OPTION_OFFSET + cfgOptDbUser,
    },
    {
        .name = "db2-user",
        .has_arg = required_argument,
        .val = PARSE_OPTION_OFFSET + cfgOptDbUser + 1,
    },
    {
        .name = "db3-user",
        .has_arg = required_argument,
        .val = PARSE_OPTION_OFFSET + cfgOptDbUser + 2,
    },
    {
        .name = "db4-user",
        .has_arg = required_argument,
        .val = PARSE_OPTION_OFFSET + cfgOptDbUser + 3,
    },
    {
        .name = "db5-user",
        .has_arg = required_argument,
        .val = PARSE_OPTION_OFFSET + cfgOptDbUser + 4,
    },
    {
        .name = "db6-user",
        .has_arg = required_argument,
        .val = PARSE_OPTION_OFFSET + cfgOptDbUser + 5,
    },
    {
        .name = "db7-user",
        .has_arg = required_argument,
        .val = PARSE_OPTION_OFFSET + cfgOptDbUser + 6,
    },
    {
        .name = "db8-user",
        .has_arg = required_argument,
        .val = PARSE_OPTION_OFFSET + cfgOptDbUser + 7,
    },
    {
        .name = "delta",
        .val = PARSE_OPTION_OFFSET + cfgOptDelta,
    },
    {
        .name = "force",
        .val = PARSE_OPTION_OFFSET + cfgOptForce,
    },
    {
        .name = "hardlink",
        .val = PARSE_OPTION_OFFSET + cfgOptHardlink,
    },
    {
        .name = "no-hardlink",
        .val = PARSE_OPTION_OFFSET + cfgOptHardlink,
    },
    {
        .name = "host-id",
        .has_arg = required_argument,
        .val = PARSE_OPTION_OFFSET + cfgOptHostId,
    },
    {
        .name = "link-all",
        .val = PARSE_OPTION_OFFSET + cfgOptLinkAll,
    },
    {
        .name = "no-link-all",
        .val = PARSE_OPTION_OFFSET + cfgOptLinkAll,
    },
    {
        .name = "link-map",
        .has_arg = required_argument,
        .val = PARSE_OPTION_OFFSET + cfgOptLinkMap,
    },
    {
        .name = "lock-path",
        .has_arg = required_argument,
        .val = PARSE_OPTION_OFFSET + cfgOptLockPath,
    },
    {
        .name = "log-level-console",
        .has_arg = required_argument,
        .val = PARSE_OPTION_OFFSET + cfgOptLogLevelConsole,
    },
    {
        .name = "log-level-file",
        .has_arg = required_argument,
        .val = PARSE_OPTION_OFFSET + cfgOptLogLevelFile,
    },
    {
        .name = "log-level-stderr",
        .has_arg = required_argument,
        .val = PARSE_OPTION_OFFSET + cfgOptLogLevelStderr,
    },
    {
        .name = "log-path",
        .has_arg = required_argument,
        .val = PARSE_OPTION_OFFSET + cfgOptLogPath,
    },
    {
        .name = "log-timestamp",
        .val = PARSE_OPTION_OFFSET + cfgOptLogTimestamp,
    },
    {
        .name = "no-log-timestamp",
        .val = PARSE_OPTION_OFFSET + cfgOptLogTimestamp,
    },
    {
        .name = "manifest-save-threshold",
        .has_arg = required_argument,
        .val = PARSE_OPTION_OFFSET + cfgOptManifestSaveThreshold,
    },
    {
        .name = "neutral-umask",
        .val = PARSE_OPTION_OFFSET + cfgOptNeutralUmask,
    },
    {
        .name = "no-neutral-umask",
        .val = PARSE_OPTION_OFFSET + cfgOptNeutralUmask,
    },
    {
        .name = "online",
        .val = PARSE_OPTION_OFFSET + cfgOptOnline,
    },
    {
        .name = "no-online",
        .val = PARSE_OPTION_OFFSET + cfgOptOnline,
    },
    {
        .name = "output",
        .has_arg = required_argument,
        .val = PARSE_OPTION_OFFSET + cfgOptOutput,
    },
    {
        .name = "process",
        .has_arg = required_argument,
        .val = PARSE_OPTION_OFFSET + cfgOptProcess,
    },
    {
        .name = "process-max",
        .has_arg = required_argument,
        .val = PARSE_OPTION_OFFSET + cfgOptProcessMax,
    },
    {
        .name = "protocol-timeout",
        .has_arg = required_argument,
        .val = PARSE_OPTION_OFFSET + cfgOptProtocolTimeout,
    },
    {
        .name = "recovery-option",
        .has_arg = required_argument,
        .val = PARSE_OPTION_OFFSET + cfgOptRecoveryOption,
    },
    {
        .name = "repo-cipher-pass",
        .has_arg = required_argument,
        .val = PARSE_OPTION_OFFSET + cfgOptRepoCipherPass,
    },
    {
        .name = "repo-cipher-type",
        .has_arg = required_argument,
        .val = PARSE_OPTION_OFFSET + cfgOptRepoCipherType,
    },
    {
        .name = "repo-path",
        .has_arg = required_argument,
        .val = PARSE_OPTION_OFFSET + cfgOptRepoPath,
    },
    {
        .name = "repo-s3-bucket",
        .has_arg = required_argument,
        .val = PARSE_OPTION_OFFSET + cfgOptRepoS3Bucket,
    },
    {
        .name = "repo-s3-ca-file",
        .has_arg = required_argument,
        .val = PARSE_OPTION_OFFSET + cfgOptRepoS3CaFile,
    },
    {
        .name = "repo-s3-ca-path",
        .has_arg = required_argument,
        .val = PARSE_OPTION_OFFSET + cfgOptRepoS3CaPath,
    },
    {
        .name = "repo-s3-endpoint",
        .has_arg = required_argument,
        .val = PARSE_OPTION_OFFSET + cfgOptRepoS3Endpoint,
    },
    {
        .name = "repo-s3-host",
        .has_arg = required_argument,
        .val = PARSE_OPTION_OFFSET + cfgOptRepoS3Host,
    },
    {
        .name = "repo-s3-key",
        .has_arg = required_argument,
        .val = PARSE_OPTION_OFFSET + cfgOptRepoS3Key,
    },
    {
        .name = "repo-s3-key-secret",
        .has_arg = required_argument,
        .val = PARSE_OPTION_OFFSET + cfgOptRepoS3KeySecret,
    },
    {
        .name = "repo-s3-region",
        .has_arg = required_argument,
        .val = PARSE_OPTION_OFFSET + cfgOptRepoS3Region,
    },
    {
        .name = "repo-s3-verify-ssl",
        .val = PARSE_OPTION_OFFSET + cfgOptRepoS3VerifySsl,
    },
    {
        .name = "no-repo-s3-verify-ssl",
        .val = PARSE_OPTION_OFFSET + cfgOptRepoS3VerifySsl,
    },
    {
        .name = "repo-type",
        .has_arg = required_argument,
        .val = PARSE_OPTION_OFFSET + cfgOptRepoType,
    },
    {
        .name = "resume",
        .val = PARSE_OPTION_OFFSET + cfgOptResume,
    },
    {
        .name = "no-resume",
        .val = PARSE_OPTION_OFFSET + cfgOptResume,
    },
    {
        .name = "retention-archive",
        .has_arg = required_argument,
        .val = PARSE_OPTION_OFFSET + cfgOptRetentionArchive,
    },
    {
        .name = "retention-archive-type",
        .has_arg = required_argument,
        .val = PARSE_OPTION_OFFSET + cfgOptRetentionArchiveType,
    },
    {
        .name = "retention-diff",
        .has_arg = required_argument,
        .val = PARSE_OPTION_OFFSET + cfgOptRetentionDiff,
    },
    {
        .name = "retention-full",
        .has_arg = required_argument,
        .val = PARSE_OPTION_OFFSET + cfgOptRetentionFull,
    },
    {
        .name = "set",
        .has_arg = required_argument,
        .val = PARSE_OPTION_OFFSET + cfgOptSet,
    },
    {
        .name = "spool-path",
        .has_arg = required_argument,
        .val = PARSE_OPTION_OFFSET + cfgOptSpoolPath,
    },
    {
        .name = "stanza",
        .has_arg = required_argument,
        .val = PARSE_OPTION_OFFSET + cfgOptStanza,
    },
    {
        .name = "start-fast",
        .val = PARSE_OPTION_OFFSET + cfgOptStartFast,
    },
    {
        .name = "no-start-fast",
        .val = PARSE_OPTION_OFFSET + cfgOptStartFast,
    },
    {
        .name = "stop-auto",
        .val = PARSE_OPTION_OFFSET + cfgOptStopAuto,
    },
    {
        .name = "no-stop-auto",
        .val = PARSE_OPTION_OFFSET + cfgOptStopAuto,
    },
    {
        .name = "tablespace-map",
        .has_arg = required_argument,
        .val = PARSE_OPTION_OFFSET + cfgOptTablespaceMap,
    },
    {
        .name = "tablespace-map-all",
        .has_arg = required_argument,
        .val = PARSE_OPTION_OFFSET + cfgOptTablespaceMapAll,
    },
    {
        .name = "target",
        .has_arg = required_argument,
        .val = PARSE_OPTION_OFFSET + cfgOptTarget,
    },
    {
        .name = "target-action",
        .has_arg = required_argument,
        .val = PARSE_OPTION_OFFSET + cfgOptTargetAction,
    },
    {
        .name = "target-exclusive",
        .val = PARSE_OPTION_OFFSET + cfgOptTargetExclusive,
    },
    {
        .name = "target-timeline",
        .has_arg = required_argument,
        .val = PARSE_OPTION_OFFSET + cfgOptTargetTimeline,
    },
    {
        .name = "test",
        .val = PARSE_OPTION_OFFSET + cfgOptTest,
    },
    {
        .name = "test-delay",
        .has_arg = required_argument,
        .val = PARSE_OPTION_OFFSET + cfgOptTestDelay,
    },
    {
        .name = "test-point",
        .has_arg = required_argument,
        .val = PARSE_OPTION_OFFSET + cfgOptTestPoint,
    },
    {
        .name = "type",
        .has_arg = required_argument,
        .val = PARSE_OPTION_OFFSET + cfgOptType,
    },
    // Perl option is ignored by normal config parsing
    {
        .name = "perl-option",
        .has_arg = required_argument,
        .val = 0,
    },
    // Terminate option list
    {
        .name = NULL
    }
};

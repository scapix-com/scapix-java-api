// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/io/RandomAccessFile.h>

#ifndef SCAPIX_JAVA_API_SUN_RMI_LOG_RELIABLELOG_LOGFILE_FWD
#define SCAPIX_JAVA_API_SUN_RMI_LOG_RELIABLELOG_LOGFILE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::rmi::log { class ReliableLog_LogFile; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::rmi::log::ReliableLog_LogFile>
{
	static constexpr fixed_string class_name = "sun/rmi/log/ReliableLog$LogFile";
	using base_classes = std::tuple<scapix::java_api::java::io::RandomAccessFile>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_RMI_LOG_RELIABLELOG_LOGFILE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_RMI_LOG_RELIABLELOG_LOGFILE)
#define SCAPIX_JAVA_API_SUN_RMI_LOG_RELIABLELOG_LOGFILE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::rmi::log::ReliableLog_LogFile : public jni::object_base<"sun/rmi/log/ReliableLog$LogFile",
	java::io::RandomAccessFile>
{
public:

	static jni::ref<sun::rmi::log::ReliableLog_LogFile> new_object(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return base_::new_object(p1, p2); }

protected:

	ReliableLog_LogFile(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_RMI_LOG_RELIABLELOG_LOGFILE
// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_IO_WIN32ERRORMODE_FWD
#define SCAPIX_JAVA_API_SUN_IO_WIN32ERRORMODE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::io { class Win32ErrorMode; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::io::Win32ErrorMode>
{
	static constexpr fixed_string class_name = "sun/io/Win32ErrorMode";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_IO_WIN32ERRORMODE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_IO_WIN32ERRORMODE)
#define SCAPIX_JAVA_API_SUN_IO_WIN32ERRORMODE

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::io::Win32ErrorMode : public jni::object_base<"sun/io/Win32ErrorMode",
	java::lang::Object>
{
public:

	static void initialize() { return call_static_method<"initialize", void>(); }

protected:

	Win32ErrorMode(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_IO_WIN32ERRORMODE
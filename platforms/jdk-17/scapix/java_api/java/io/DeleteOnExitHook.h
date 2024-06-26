// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_IO_DELETEONEXITHOOK_FWD
#define SCAPIX_JAVA_API_JAVA_IO_DELETEONEXITHOOK_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::io { class DeleteOnExitHook; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::io::DeleteOnExitHook>
{
	static constexpr fixed_string class_name = "java/io/DeleteOnExitHook";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_IO_DELETEONEXITHOOK_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_IO_DELETEONEXITHOOK)
#define SCAPIX_JAVA_API_JAVA_IO_DELETEONEXITHOOK

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::io::DeleteOnExitHook : public jni::object_base<"java/io/DeleteOnExitHook",
	java::lang::Object>
{
public:


protected:

	DeleteOnExitHook(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_IO_DELETEONEXITHOOK

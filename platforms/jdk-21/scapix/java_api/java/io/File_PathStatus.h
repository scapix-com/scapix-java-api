// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Enum.h>

#ifndef SCAPIX_JAVA_API_JAVA_IO_FILE_PATHSTATUS_FWD
#define SCAPIX_JAVA_API_JAVA_IO_FILE_PATHSTATUS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::io { class File_PathStatus; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::io::File_PathStatus>
{
	static constexpr fixed_string class_name = "java/io/File$PathStatus";
	using base_classes = std::tuple<scapix::java_api::java::lang::Enum>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_IO_FILE_PATHSTATUS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_IO_FILE_PATHSTATUS)
#define SCAPIX_JAVA_API_JAVA_IO_FILE_PATHSTATUS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::io::File_PathStatus : public jni::object_base<"java/io/File$PathStatus",
	java::lang::Enum>
{
public:

	static jni::ref<java::io::File_PathStatus> INVALID() { return get_static_field<"INVALID", jni::ref<java::io::File_PathStatus>>(); }
	static jni::ref<java::io::File_PathStatus> CHECKED() { return get_static_field<"CHECKED", jni::ref<java::io::File_PathStatus>>(); }

	static jni::ref<jni::array<java::io::File_PathStatus>> values() { return call_static_method<"values", jni::ref<jni::array<java::io::File_PathStatus>>>(); }
	static jni::ref<java::io::File_PathStatus> valueOf(jni::ref<java::lang::String> name) { return call_static_method<"valueOf", jni::ref<java::io::File_PathStatus>>(name); }

protected:

	File_PathStatus(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_IO_FILE_PATHSTATUS

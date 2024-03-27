// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Enum.h>

#ifndef SCAPIX_JAVA_API_JAVA_NIO_FILE_FILEVISITOPTION_FWD
#define SCAPIX_JAVA_API_JAVA_NIO_FILE_FILEVISITOPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::nio::file { class FileVisitOption; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::nio::file::FileVisitOption>
{
	static constexpr fixed_string class_name = "java/nio/file/FileVisitOption";
	using base_classes = std::tuple<scapix::java_api::java::lang::Enum>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NIO_FILE_FILEVISITOPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_NIO_FILE_FILEVISITOPTION)
#define SCAPIX_JAVA_API_JAVA_NIO_FILE_FILEVISITOPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::nio::file::FileVisitOption : public jni::object_base<"java/nio/file/FileVisitOption",
	java::lang::Enum>
{
public:

	static jni::ref<java::nio::file::FileVisitOption> FOLLOW_LINKS() { return get_static_field<"FOLLOW_LINKS", jni::ref<java::nio::file::FileVisitOption>>(); }

	static jni::ref<jni::array<java::nio::file::FileVisitOption>> values() { return call_static_method<"values", jni::ref<jni::array<java::nio::file::FileVisitOption>>>(); }
	static jni::ref<java::nio::file::FileVisitOption> valueOf(jni::ref<java::lang::String> name) { return call_static_method<"valueOf", jni::ref<java::nio::file::FileVisitOption>>(name); }

protected:

	FileVisitOption(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NIO_FILE_FILEVISITOPTION

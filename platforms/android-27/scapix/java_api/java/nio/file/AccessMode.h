// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Enum.h>

#ifndef SCAPIX_JAVA_API_JAVA_NIO_FILE_ACCESSMODE_FWD
#define SCAPIX_JAVA_API_JAVA_NIO_FILE_ACCESSMODE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::nio::file { class AccessMode; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::nio::file::AccessMode>
{
	static constexpr fixed_string class_name = "java/nio/file/AccessMode";
	using base_classes = std::tuple<scapix::java_api::java::lang::Enum>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NIO_FILE_ACCESSMODE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_NIO_FILE_ACCESSMODE)
#define SCAPIX_JAVA_API_JAVA_NIO_FILE_ACCESSMODE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::nio::file::AccessMode : public jni::object_base<"java/nio/file/AccessMode",
	java::lang::Enum>
{
public:

	static jni::ref<java::nio::file::AccessMode> EXECUTE() { return get_static_field<"EXECUTE", jni::ref<java::nio::file::AccessMode>>(); }
	static jni::ref<java::nio::file::AccessMode> READ() { return get_static_field<"READ", jni::ref<java::nio::file::AccessMode>>(); }
	static jni::ref<java::nio::file::AccessMode> WRITE() { return get_static_field<"WRITE", jni::ref<java::nio::file::AccessMode>>(); }

	static jni::ref<jni::array<java::nio::file::AccessMode>> values() { return call_static_method<"values", jni::ref<jni::array<java::nio::file::AccessMode>>>(); }
	static jni::ref<java::nio::file::AccessMode> valueOf(jni::ref<java::lang::String> name) { return call_static_method<"valueOf", jni::ref<java::nio::file::AccessMode>>(name); }

protected:

	AccessMode(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NIO_FILE_ACCESSMODE
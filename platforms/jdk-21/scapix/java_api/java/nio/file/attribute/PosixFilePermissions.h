// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_NIO_FILE_ATTRIBUTE_POSIXFILEPERMISSIONS_FWD
#define SCAPIX_JAVA_API_JAVA_NIO_FILE_ATTRIBUTE_POSIXFILEPERMISSIONS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::nio::file::attribute { class PosixFilePermissions; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::nio::file::attribute::PosixFilePermissions>
{
	static constexpr fixed_string class_name = "java/nio/file/attribute/PosixFilePermissions";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NIO_FILE_ATTRIBUTE_POSIXFILEPERMISSIONS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_NIO_FILE_ATTRIBUTE_POSIXFILEPERMISSIONS)
#define SCAPIX_JAVA_API_JAVA_NIO_FILE_ATTRIBUTE_POSIXFILEPERMISSIONS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/nio/file/attribute/FileAttribute.h>
#include <scapix/java_api/java/util/Set.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::nio::file::attribute::PosixFilePermissions : public jni::object_base<"java/nio/file/attribute/PosixFilePermissions",
	java::lang::Object>
{
public:

	static jni::ref<java::lang::String> toString(jni::ref<java::util::Set> perms) { return call_static_method<"toString", jni::ref<java::lang::String>>(perms); }
	static jni::ref<java::util::Set> fromString(jni::ref<java::lang::String> perms) { return call_static_method<"fromString", jni::ref<java::util::Set>>(perms); }
	static jni::ref<java::nio::file::attribute::FileAttribute> asFileAttribute(jni::ref<java::util::Set> perms) { return call_static_method<"asFileAttribute", jni::ref<java::nio::file::attribute::FileAttribute>>(perms); }

protected:

	PosixFilePermissions(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NIO_FILE_ATTRIBUTE_POSIXFILEPERMISSIONS

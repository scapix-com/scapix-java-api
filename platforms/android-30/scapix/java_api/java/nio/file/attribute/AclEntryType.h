// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Enum.h>

#ifndef SCAPIX_JAVA_API_JAVA_NIO_FILE_ATTRIBUTE_ACLENTRYTYPE_FWD
#define SCAPIX_JAVA_API_JAVA_NIO_FILE_ATTRIBUTE_ACLENTRYTYPE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::nio::file::attribute { class AclEntryType; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::nio::file::attribute::AclEntryType>
{
	static constexpr fixed_string class_name = "java/nio/file/attribute/AclEntryType";
	using base_classes = std::tuple<scapix::java_api::java::lang::Enum>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NIO_FILE_ATTRIBUTE_ACLENTRYTYPE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_NIO_FILE_ATTRIBUTE_ACLENTRYTYPE)
#define SCAPIX_JAVA_API_JAVA_NIO_FILE_ATTRIBUTE_ACLENTRYTYPE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::nio::file::attribute::AclEntryType : public jni::object_base<"java/nio/file/attribute/AclEntryType",
	java::lang::Enum>
{
public:

	static jni::ref<java::nio::file::attribute::AclEntryType> ALLOW() { return get_static_field<"ALLOW", jni::ref<java::nio::file::attribute::AclEntryType>>(); }
	static jni::ref<java::nio::file::attribute::AclEntryType> DENY() { return get_static_field<"DENY", jni::ref<java::nio::file::attribute::AclEntryType>>(); }
	static jni::ref<java::nio::file::attribute::AclEntryType> AUDIT() { return get_static_field<"AUDIT", jni::ref<java::nio::file::attribute::AclEntryType>>(); }
	static jni::ref<java::nio::file::attribute::AclEntryType> ALARM() { return get_static_field<"ALARM", jni::ref<java::nio::file::attribute::AclEntryType>>(); }

	static jni::ref<jni::array<java::nio::file::attribute::AclEntryType>> values() { return call_static_method<"values", jni::ref<jni::array<java::nio::file::attribute::AclEntryType>>>(); }
	static jni::ref<java::nio::file::attribute::AclEntryType> valueOf(jni::ref<java::lang::String> name) { return call_static_method<"valueOf", jni::ref<java::nio::file::attribute::AclEntryType>>(name); }

protected:

	AclEntryType(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NIO_FILE_ATTRIBUTE_ACLENTRYTYPE

// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/classfile/Attribute.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_ATTRIBUTE_BOOTSTRAPMETHODSATTRIBUTE_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_ATTRIBUTE_BOOTSTRAPMETHODSATTRIBUTE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang::classfile::attribute { class BootstrapMethodsAttribute; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::classfile::attribute::BootstrapMethodsAttribute>
{
	static constexpr fixed_string class_name = "java/lang/classfile/attribute/BootstrapMethodsAttribute";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::classfile::Attribute>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_ATTRIBUTE_BOOTSTRAPMETHODSATTRIBUTE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_ATTRIBUTE_BOOTSTRAPMETHODSATTRIBUTE)
#define SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_ATTRIBUTE_BOOTSTRAPMETHODSATTRIBUTE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/List.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::lang::classfile::attribute::BootstrapMethodsAttribute : public jni::object_base<"java/lang/classfile/attribute/BootstrapMethodsAttribute",
	java::lang::Object,
	java::lang::classfile::Attribute>
{
public:

	jni::ref<java::util::List> bootstrapMethods() { return call_method<"bootstrapMethods", jni::ref<java::util::List>>(); }
	jint bootstrapMethodsSize() { return call_method<"bootstrapMethodsSize", jint>(); }

protected:

	BootstrapMethodsAttribute(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_ATTRIBUTE_BOOTSTRAPMETHODSATTRIBUTE

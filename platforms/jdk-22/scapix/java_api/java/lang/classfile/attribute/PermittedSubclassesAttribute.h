// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/classfile/Attribute.h>
#include <scapix/java_api/java/lang/classfile/ClassElement.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_ATTRIBUTE_PERMITTEDSUBCLASSESATTRIBUTE_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_ATTRIBUTE_PERMITTEDSUBCLASSESATTRIBUTE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang::classfile::attribute { class PermittedSubclassesAttribute; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::classfile::attribute::PermittedSubclassesAttribute>
{
	static constexpr fixed_string class_name = "java/lang/classfile/attribute/PermittedSubclassesAttribute";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::classfile::Attribute, scapix::java_api::java::lang::classfile::ClassElement>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_ATTRIBUTE_PERMITTEDSUBCLASSESATTRIBUTE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_ATTRIBUTE_PERMITTEDSUBCLASSESATTRIBUTE)
#define SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_ATTRIBUTE_PERMITTEDSUBCLASSESATTRIBUTE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/classfile/constantpool/ClassEntry.h>
#include <scapix/java_api/java/lang/constant/ClassDesc.h>
#include <scapix/java_api/java/util/List.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::lang::classfile::attribute::PermittedSubclassesAttribute : public jni::object_base<"java/lang/classfile/attribute/PermittedSubclassesAttribute",
	java::lang::Object,
	java::lang::classfile::Attribute,
	java::lang::classfile::ClassElement>
{
public:

	jni::ref<java::util::List> permittedSubclasses() { return call_method<"permittedSubclasses", jni::ref<java::util::List>>(); }
	static jni::ref<java::lang::classfile::attribute::PermittedSubclassesAttribute> of(jni::ref<java::util::List> permittedSubclasses) { return call_static_method<"of", jni::ref<java::lang::classfile::attribute::PermittedSubclassesAttribute>>(permittedSubclasses); }
	static jni::ref<java::lang::classfile::attribute::PermittedSubclassesAttribute> of(jni::ref<jni::array<java::lang::classfile::constantpool::ClassEntry>> permittedSubclasses) { return call_static_method<"of", jni::ref<java::lang::classfile::attribute::PermittedSubclassesAttribute>>(permittedSubclasses); }
	static jni::ref<java::lang::classfile::attribute::PermittedSubclassesAttribute> ofSymbols(jni::ref<java::util::List> permittedSubclasses) { return call_static_method<"ofSymbols", jni::ref<java::lang::classfile::attribute::PermittedSubclassesAttribute>>(permittedSubclasses); }
	static jni::ref<java::lang::classfile::attribute::PermittedSubclassesAttribute> ofSymbols(jni::ref<jni::array<java::lang::constant::ClassDesc>> permittedSubclasses) { return call_static_method<"ofSymbols", jni::ref<java::lang::classfile::attribute::PermittedSubclassesAttribute>>(permittedSubclasses); }

protected:

	PermittedSubclassesAttribute(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_ATTRIBUTE_PERMITTEDSUBCLASSESATTRIBUTE

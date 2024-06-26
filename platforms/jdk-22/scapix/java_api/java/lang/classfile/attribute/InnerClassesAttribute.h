// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/classfile/Attribute.h>
#include <scapix/java_api/java/lang/classfile/ClassElement.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_ATTRIBUTE_INNERCLASSESATTRIBUTE_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_ATTRIBUTE_INNERCLASSESATTRIBUTE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang::classfile::attribute { class InnerClassesAttribute; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::classfile::attribute::InnerClassesAttribute>
{
	static constexpr fixed_string class_name = "java/lang/classfile/attribute/InnerClassesAttribute";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::classfile::Attribute, scapix::java_api::java::lang::classfile::ClassElement>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_ATTRIBUTE_INNERCLASSESATTRIBUTE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_ATTRIBUTE_INNERCLASSESATTRIBUTE)
#define SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_ATTRIBUTE_INNERCLASSESATTRIBUTE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/classfile/attribute/InnerClassInfo.h>
#include <scapix/java_api/java/util/List.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::lang::classfile::attribute::InnerClassesAttribute : public jni::object_base<"java/lang/classfile/attribute/InnerClassesAttribute",
	java::lang::Object,
	java::lang::classfile::Attribute,
	java::lang::classfile::ClassElement>
{
public:

	jni::ref<java::util::List> classes() { return call_method<"classes", jni::ref<java::util::List>>(); }
	static jni::ref<java::lang::classfile::attribute::InnerClassesAttribute> of(jni::ref<java::util::List> innerClasses) { return call_static_method<"of", jni::ref<java::lang::classfile::attribute::InnerClassesAttribute>>(innerClasses); }
	static jni::ref<java::lang::classfile::attribute::InnerClassesAttribute> of(jni::ref<jni::array<java::lang::classfile::attribute::InnerClassInfo>> innerClasses) { return call_static_method<"of", jni::ref<java::lang::classfile::attribute::InnerClassesAttribute>>(innerClasses); }

protected:

	InnerClassesAttribute(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_ATTRIBUTE_INNERCLASSESATTRIBUTE

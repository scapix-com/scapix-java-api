// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/jdk/internal/classfile/Attribute.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_ATTRIBUTE_LOCALVARIABLETABLEATTRIBUTE_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_ATTRIBUTE_LOCALVARIABLETABLEATTRIBUTE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::classfile::attribute { class LocalVariableTableAttribute; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::classfile::attribute::LocalVariableTableAttribute>
{
	static constexpr fixed_string class_name = "jdk/internal/classfile/attribute/LocalVariableTableAttribute";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::jdk::internal::classfile::Attribute>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_ATTRIBUTE_LOCALVARIABLETABLEATTRIBUTE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_ATTRIBUTE_LOCALVARIABLETABLEATTRIBUTE)
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_ATTRIBUTE_LOCALVARIABLETABLEATTRIBUTE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/List.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::classfile::attribute::LocalVariableTableAttribute : public jni::object_base<"jdk/internal/classfile/attribute/LocalVariableTableAttribute",
	java::lang::Object,
	jdk::internal::classfile::Attribute>
{
public:

	jni::ref<java::util::List> localVariables() { return call_method<"localVariables", jni::ref<java::util::List>>(); }
	static jni::ref<jdk::internal::classfile::attribute::LocalVariableTableAttribute> of(jni::ref<java::util::List> locals) { return call_static_method<"of", jni::ref<jdk::internal::classfile::attribute::LocalVariableTableAttribute>>(locals); }

protected:

	LocalVariableTableAttribute(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_ATTRIBUTE_LOCALVARIABLETABLEATTRIBUTE

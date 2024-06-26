// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/lang/model/util/SimpleElementVisitor6.h>

#ifndef SCAPIX_JAVA_API_JAVAX_LANG_MODEL_UTIL_ELEMENTKINDVISITOR6_FWD
#define SCAPIX_JAVA_API_JAVAX_LANG_MODEL_UTIL_ELEMENTKINDVISITOR6_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::lang::model::util { class ElementKindVisitor6; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::lang::model::util::ElementKindVisitor6>
{
	static constexpr fixed_string class_name = "javax/lang/model/util/ElementKindVisitor6";
	using base_classes = std::tuple<scapix::java_api::javax::lang::model::util::SimpleElementVisitor6>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_LANG_MODEL_UTIL_ELEMENTKINDVISITOR6_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_LANG_MODEL_UTIL_ELEMENTKINDVISITOR6)
#define SCAPIX_JAVA_API_JAVAX_LANG_MODEL_UTIL_ELEMENTKINDVISITOR6

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/javax/lang/model/element/ExecutableElement.h>
#include <scapix/java_api/javax/lang/model/element/PackageElement.h>
#include <scapix/java_api/javax/lang/model/element/TypeElement.h>
#include <scapix/java_api/javax/lang/model/element/TypeParameterElement.h>
#include <scapix/java_api/javax/lang/model/element/VariableElement.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::lang::model::util::ElementKindVisitor6 : public jni::object_base<"javax/lang/model/util/ElementKindVisitor6",
	javax::lang::model::util::SimpleElementVisitor6>
{
public:

	jni::ref<java::lang::Object> visitPackage(jni::ref<javax::lang::model::element::PackageElement> p1, jni::ref<java::lang::Object> p2) { return call_method<"visitPackage", jni::ref<java::lang::Object>>(p1, p2); }
	jni::ref<java::lang::Object> visitType(jni::ref<javax::lang::model::element::TypeElement> p1, jni::ref<java::lang::Object> p2) { return call_method<"visitType", jni::ref<java::lang::Object>>(p1, p2); }
	jni::ref<java::lang::Object> visitTypeAsAnnotationType(jni::ref<javax::lang::model::element::TypeElement> p1, jni::ref<java::lang::Object> p2) { return call_method<"visitTypeAsAnnotationType", jni::ref<java::lang::Object>>(p1, p2); }
	jni::ref<java::lang::Object> visitTypeAsClass(jni::ref<javax::lang::model::element::TypeElement> p1, jni::ref<java::lang::Object> p2) { return call_method<"visitTypeAsClass", jni::ref<java::lang::Object>>(p1, p2); }
	jni::ref<java::lang::Object> visitTypeAsEnum(jni::ref<javax::lang::model::element::TypeElement> p1, jni::ref<java::lang::Object> p2) { return call_method<"visitTypeAsEnum", jni::ref<java::lang::Object>>(p1, p2); }
	jni::ref<java::lang::Object> visitTypeAsInterface(jni::ref<javax::lang::model::element::TypeElement> p1, jni::ref<java::lang::Object> p2) { return call_method<"visitTypeAsInterface", jni::ref<java::lang::Object>>(p1, p2); }
	jni::ref<java::lang::Object> visitVariable(jni::ref<javax::lang::model::element::VariableElement> p1, jni::ref<java::lang::Object> p2) { return call_method<"visitVariable", jni::ref<java::lang::Object>>(p1, p2); }
	jni::ref<java::lang::Object> visitVariableAsEnumConstant(jni::ref<javax::lang::model::element::VariableElement> p1, jni::ref<java::lang::Object> p2) { return call_method<"visitVariableAsEnumConstant", jni::ref<java::lang::Object>>(p1, p2); }
	jni::ref<java::lang::Object> visitVariableAsExceptionParameter(jni::ref<javax::lang::model::element::VariableElement> p1, jni::ref<java::lang::Object> p2) { return call_method<"visitVariableAsExceptionParameter", jni::ref<java::lang::Object>>(p1, p2); }
	jni::ref<java::lang::Object> visitVariableAsField(jni::ref<javax::lang::model::element::VariableElement> p1, jni::ref<java::lang::Object> p2) { return call_method<"visitVariableAsField", jni::ref<java::lang::Object>>(p1, p2); }
	jni::ref<java::lang::Object> visitVariableAsLocalVariable(jni::ref<javax::lang::model::element::VariableElement> p1, jni::ref<java::lang::Object> p2) { return call_method<"visitVariableAsLocalVariable", jni::ref<java::lang::Object>>(p1, p2); }
	jni::ref<java::lang::Object> visitVariableAsParameter(jni::ref<javax::lang::model::element::VariableElement> p1, jni::ref<java::lang::Object> p2) { return call_method<"visitVariableAsParameter", jni::ref<java::lang::Object>>(p1, p2); }
	jni::ref<java::lang::Object> visitVariableAsResourceVariable(jni::ref<javax::lang::model::element::VariableElement> p1, jni::ref<java::lang::Object> p2) { return call_method<"visitVariableAsResourceVariable", jni::ref<java::lang::Object>>(p1, p2); }
	jni::ref<java::lang::Object> visitExecutable(jni::ref<javax::lang::model::element::ExecutableElement> p1, jni::ref<java::lang::Object> p2) { return call_method<"visitExecutable", jni::ref<java::lang::Object>>(p1, p2); }
	jni::ref<java::lang::Object> visitExecutableAsConstructor(jni::ref<javax::lang::model::element::ExecutableElement> p1, jni::ref<java::lang::Object> p2) { return call_method<"visitExecutableAsConstructor", jni::ref<java::lang::Object>>(p1, p2); }
	jni::ref<java::lang::Object> visitExecutableAsInstanceInit(jni::ref<javax::lang::model::element::ExecutableElement> p1, jni::ref<java::lang::Object> p2) { return call_method<"visitExecutableAsInstanceInit", jni::ref<java::lang::Object>>(p1, p2); }
	jni::ref<java::lang::Object> visitExecutableAsMethod(jni::ref<javax::lang::model::element::ExecutableElement> p1, jni::ref<java::lang::Object> p2) { return call_method<"visitExecutableAsMethod", jni::ref<java::lang::Object>>(p1, p2); }
	jni::ref<java::lang::Object> visitExecutableAsStaticInit(jni::ref<javax::lang::model::element::ExecutableElement> p1, jni::ref<java::lang::Object> p2) { return call_method<"visitExecutableAsStaticInit", jni::ref<java::lang::Object>>(p1, p2); }
	jni::ref<java::lang::Object> visitTypeParameter(jni::ref<javax::lang::model::element::TypeParameterElement> p1, jni::ref<java::lang::Object> p2) { return call_method<"visitTypeParameter", jni::ref<java::lang::Object>>(p1, p2); }

protected:

	ElementKindVisitor6(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_LANG_MODEL_UTIL_ELEMENTKINDVISITOR6

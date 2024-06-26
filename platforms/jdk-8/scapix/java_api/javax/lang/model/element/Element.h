// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/javax/lang/model/AnnotatedConstruct.h>

#ifndef SCAPIX_JAVA_API_JAVAX_LANG_MODEL_ELEMENT_ELEMENT_FWD
#define SCAPIX_JAVA_API_JAVAX_LANG_MODEL_ELEMENT_ELEMENT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::lang::model::element { class Element; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::lang::model::element::Element>
{
	static constexpr fixed_string class_name = "javax/lang/model/element/Element";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::javax::lang::model::AnnotatedConstruct>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_LANG_MODEL_ELEMENT_ELEMENT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_LANG_MODEL_ELEMENT_ELEMENT)
#define SCAPIX_JAVA_API_JAVAX_LANG_MODEL_ELEMENT_ELEMENT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/lang/annotation/Annotation.h>
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/java/util/Set.h>
#include <scapix/java_api/javax/lang/model/element/ElementKind.h>
#include <scapix/java_api/javax/lang/model/element/ElementVisitor.h>
#include <scapix/java_api/javax/lang/model/element/Name.h>
#include <scapix/java_api/javax/lang/model/type/TypeMirror.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::lang::model::element::Element : public jni::object_base<"javax/lang/model/element/Element",
	java::lang::Object,
	javax::lang::model::AnnotatedConstruct>
{
public:

	jni::ref<javax::lang::model::type::TypeMirror> asType() { return call_method<"asType", jni::ref<javax::lang::model::type::TypeMirror>>(); }
	jni::ref<javax::lang::model::element::ElementKind> getKind() { return call_method<"getKind", jni::ref<javax::lang::model::element::ElementKind>>(); }
	jni::ref<java::util::Set> getModifiers() { return call_method<"getModifiers", jni::ref<java::util::Set>>(); }
	jni::ref<javax::lang::model::element::Name> getSimpleName() { return call_method<"getSimpleName", jni::ref<javax::lang::model::element::Name>>(); }
	jni::ref<javax::lang::model::element::Element> getEnclosingElement() { return call_method<"getEnclosingElement", jni::ref<javax::lang::model::element::Element>>(); }
	jni::ref<java::util::List> getEnclosedElements() { return call_method<"getEnclosedElements", jni::ref<java::util::List>>(); }
	jboolean equals(jni::ref<java::lang::Object> p1) { return call_method<"equals", jboolean>(p1); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jni::ref<java::util::List> getAnnotationMirrors() { return call_method<"getAnnotationMirrors", jni::ref<java::util::List>>(); }
	jni::ref<java::lang::annotation::Annotation> getAnnotation(jni::ref<java::lang::Class> p1) { return call_method<"getAnnotation", jni::ref<java::lang::annotation::Annotation>>(p1); }
	jni::ref<java::lang::Object> accept(jni::ref<javax::lang::model::element::ElementVisitor> p1, jni::ref<java::lang::Object> p2) { return call_method<"accept", jni::ref<java::lang::Object>>(p1, p2); }

protected:

	Element(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_LANG_MODEL_ELEMENT_ELEMENT

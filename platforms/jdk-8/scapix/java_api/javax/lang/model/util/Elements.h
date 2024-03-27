// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVAX_LANG_MODEL_UTIL_ELEMENTS_FWD
#define SCAPIX_JAVA_API_JAVAX_LANG_MODEL_UTIL_ELEMENTS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::lang::model::util { class Elements; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::lang::model::util::Elements>
{
	static constexpr fixed_string class_name = "javax/lang/model/util/Elements";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_LANG_MODEL_UTIL_ELEMENTS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_LANG_MODEL_UTIL_ELEMENTS)
#define SCAPIX_JAVA_API_JAVAX_LANG_MODEL_UTIL_ELEMENTS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/Writer.h>
#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/java/util/Map.h>
#include <scapix/java_api/javax/lang/model/element/AnnotationMirror.h>
#include <scapix/java_api/javax/lang/model/element/Element.h>
#include <scapix/java_api/javax/lang/model/element/ExecutableElement.h>
#include <scapix/java_api/javax/lang/model/element/Name.h>
#include <scapix/java_api/javax/lang/model/element/PackageElement.h>
#include <scapix/java_api/javax/lang/model/element/TypeElement.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::lang::model::util::Elements : public jni::object_base<"javax/lang/model/util/Elements",
	java::lang::Object>
{
public:

	jni::ref<javax::lang::model::element::PackageElement> getPackageElement(jni::ref<java::lang::CharSequence> p1) { return call_method<"getPackageElement", jni::ref<javax::lang::model::element::PackageElement>>(p1); }
	jni::ref<javax::lang::model::element::TypeElement> getTypeElement(jni::ref<java::lang::CharSequence> p1) { return call_method<"getTypeElement", jni::ref<javax::lang::model::element::TypeElement>>(p1); }
	jni::ref<java::util::Map> getElementValuesWithDefaults(jni::ref<javax::lang::model::element::AnnotationMirror> p1) { return call_method<"getElementValuesWithDefaults", jni::ref<java::util::Map>>(p1); }
	jni::ref<java::lang::String> getDocComment(jni::ref<javax::lang::model::element::Element> p1) { return call_method<"getDocComment", jni::ref<java::lang::String>>(p1); }
	jboolean isDeprecated(jni::ref<javax::lang::model::element::Element> p1) { return call_method<"isDeprecated", jboolean>(p1); }
	jni::ref<javax::lang::model::element::Name> getBinaryName(jni::ref<javax::lang::model::element::TypeElement> p1) { return call_method<"getBinaryName", jni::ref<javax::lang::model::element::Name>>(p1); }
	jni::ref<javax::lang::model::element::PackageElement> getPackageOf(jni::ref<javax::lang::model::element::Element> p1) { return call_method<"getPackageOf", jni::ref<javax::lang::model::element::PackageElement>>(p1); }
	jni::ref<java::util::List> getAllMembers(jni::ref<javax::lang::model::element::TypeElement> p1) { return call_method<"getAllMembers", jni::ref<java::util::List>>(p1); }
	jni::ref<java::util::List> getAllAnnotationMirrors(jni::ref<javax::lang::model::element::Element> p1) { return call_method<"getAllAnnotationMirrors", jni::ref<java::util::List>>(p1); }
	jboolean hides(jni::ref<javax::lang::model::element::Element> p1, jni::ref<javax::lang::model::element::Element> p2) { return call_method<"hides", jboolean>(p1, p2); }
	jboolean overrides(jni::ref<javax::lang::model::element::ExecutableElement> p1, jni::ref<javax::lang::model::element::ExecutableElement> p2, jni::ref<javax::lang::model::element::TypeElement> p3) { return call_method<"overrides", jboolean>(p1, p2, p3); }
	jni::ref<java::lang::String> getConstantExpression(jni::ref<java::lang::Object> p1) { return call_method<"getConstantExpression", jni::ref<java::lang::String>>(p1); }
	void printElements(jni::ref<java::io::Writer> p1, jni::ref<jni::array<javax::lang::model::element::Element>> p2) { return call_method<"printElements", void>(p1, p2); }
	jni::ref<javax::lang::model::element::Name> getName(jni::ref<java::lang::CharSequence> p1) { return call_method<"getName", jni::ref<javax::lang::model::element::Name>>(p1); }
	jboolean isFunctionalInterface(jni::ref<javax::lang::model::element::TypeElement> p1) { return call_method<"isFunctionalInterface", jboolean>(p1); }

protected:

	Elements(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_LANG_MODEL_UTIL_ELEMENTS
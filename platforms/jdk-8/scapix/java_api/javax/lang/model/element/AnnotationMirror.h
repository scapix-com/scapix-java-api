// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVAX_LANG_MODEL_ELEMENT_ANNOTATIONMIRROR_FWD
#define SCAPIX_JAVA_API_JAVAX_LANG_MODEL_ELEMENT_ANNOTATIONMIRROR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::lang::model::element { class AnnotationMirror; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::lang::model::element::AnnotationMirror>
{
	static constexpr fixed_string class_name = "javax/lang/model/element/AnnotationMirror";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_LANG_MODEL_ELEMENT_ANNOTATIONMIRROR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_LANG_MODEL_ELEMENT_ANNOTATIONMIRROR)
#define SCAPIX_JAVA_API_JAVAX_LANG_MODEL_ELEMENT_ANNOTATIONMIRROR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/Map.h>
#include <scapix/java_api/javax/lang/model/type/DeclaredType.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::lang::model::element::AnnotationMirror : public jni::object_base<"javax/lang/model/element/AnnotationMirror",
	java::lang::Object>
{
public:

	jni::ref<javax::lang::model::type::DeclaredType> getAnnotationType() { return call_method<"getAnnotationType", jni::ref<javax::lang::model::type::DeclaredType>>(); }
	jni::ref<java::util::Map> getElementValues() { return call_method<"getElementValues", jni::ref<java::util::Map>>(); }

protected:

	AnnotationMirror(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_LANG_MODEL_ELEMENT_ANNOTATIONMIRROR

// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/javax/lang/model/element/Element.h>

#ifndef SCAPIX_JAVA_API_JAVAX_LANG_MODEL_ELEMENT_QUALIFIEDNAMEABLE_FWD
#define SCAPIX_JAVA_API_JAVAX_LANG_MODEL_ELEMENT_QUALIFIEDNAMEABLE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::lang::model::element { class QualifiedNameable; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::lang::model::element::QualifiedNameable>
{
	static constexpr fixed_string class_name = "javax/lang/model/element/QualifiedNameable";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::javax::lang::model::element::Element>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_LANG_MODEL_ELEMENT_QUALIFIEDNAMEABLE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_LANG_MODEL_ELEMENT_QUALIFIEDNAMEABLE)
#define SCAPIX_JAVA_API_JAVAX_LANG_MODEL_ELEMENT_QUALIFIEDNAMEABLE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/javax/lang/model/element/Name.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::lang::model::element::QualifiedNameable : public jni::object_base<"javax/lang/model/element/QualifiedNameable",
	java::lang::Object,
	javax::lang::model::element::Element>
{
public:

	jni::ref<javax::lang::model::element::Name> getQualifiedName() { return call_method<"getQualifiedName", jni::ref<javax::lang::model::element::Name>>(); }

protected:

	QualifiedNameable(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_LANG_MODEL_ELEMENT_QUALIFIEDNAMEABLE

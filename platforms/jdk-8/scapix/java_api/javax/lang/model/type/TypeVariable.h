// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/javax/lang/model/type/ReferenceType.h>

#ifndef SCAPIX_JAVA_API_JAVAX_LANG_MODEL_TYPE_TYPEVARIABLE_FWD
#define SCAPIX_JAVA_API_JAVAX_LANG_MODEL_TYPE_TYPEVARIABLE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::lang::model::type { class TypeVariable; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::lang::model::type::TypeVariable>
{
	static constexpr fixed_string class_name = "javax/lang/model/type/TypeVariable";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::javax::lang::model::type::ReferenceType>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_LANG_MODEL_TYPE_TYPEVARIABLE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_LANG_MODEL_TYPE_TYPEVARIABLE)
#define SCAPIX_JAVA_API_JAVAX_LANG_MODEL_TYPE_TYPEVARIABLE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/javax/lang/model/element/Element.h>
#include <scapix/java_api/javax/lang/model/type/TypeMirror.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::lang::model::type::TypeVariable : public jni::object_base<"javax/lang/model/type/TypeVariable",
	java::lang::Object,
	javax::lang::model::type::ReferenceType>
{
public:

	jni::ref<javax::lang::model::element::Element> asElement() { return call_method<"asElement", jni::ref<javax::lang::model::element::Element>>(); }
	jni::ref<javax::lang::model::type::TypeMirror> getUpperBound() { return call_method<"getUpperBound", jni::ref<javax::lang::model::type::TypeMirror>>(); }
	jni::ref<javax::lang::model::type::TypeMirror> getLowerBound() { return call_method<"getLowerBound", jni::ref<javax::lang::model::type::TypeMirror>>(); }

protected:

	TypeVariable(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_LANG_MODEL_TYPE_TYPEVARIABLE

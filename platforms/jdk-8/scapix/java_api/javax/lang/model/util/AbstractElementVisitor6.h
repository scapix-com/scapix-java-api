// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/javax/lang/model/element/ElementVisitor.h>

#ifndef SCAPIX_JAVA_API_JAVAX_LANG_MODEL_UTIL_ABSTRACTELEMENTVISITOR6_FWD
#define SCAPIX_JAVA_API_JAVAX_LANG_MODEL_UTIL_ABSTRACTELEMENTVISITOR6_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::lang::model::util { class AbstractElementVisitor6; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::lang::model::util::AbstractElementVisitor6>
{
	static constexpr fixed_string class_name = "javax/lang/model/util/AbstractElementVisitor6";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::javax::lang::model::element::ElementVisitor>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_LANG_MODEL_UTIL_ABSTRACTELEMENTVISITOR6_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_LANG_MODEL_UTIL_ABSTRACTELEMENTVISITOR6)
#define SCAPIX_JAVA_API_JAVAX_LANG_MODEL_UTIL_ABSTRACTELEMENTVISITOR6

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/javax/lang/model/element/Element.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::lang::model::util::AbstractElementVisitor6 : public jni::object_base<"javax/lang/model/util/AbstractElementVisitor6",
	java::lang::Object,
	javax::lang::model::element::ElementVisitor>
{
public:

	jni::ref<java::lang::Object> visit(jni::ref<javax::lang::model::element::Element> p1, jni::ref<java::lang::Object> p2) { return call_method<"visit", jni::ref<java::lang::Object>>(p1, p2); }
	jni::ref<java::lang::Object> visit(jni::ref<javax::lang::model::element::Element> p1) { return call_method<"visit", jni::ref<java::lang::Object>>(p1); }
	jni::ref<java::lang::Object> visitUnknown(jni::ref<javax::lang::model::element::Element> p1, jni::ref<java::lang::Object> p2) { return call_method<"visitUnknown", jni::ref<java::lang::Object>>(p1, p2); }

protected:

	AbstractElementVisitor6(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_LANG_MODEL_UTIL_ABSTRACTELEMENTVISITOR6

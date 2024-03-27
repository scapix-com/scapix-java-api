// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/org/apache/xpath/internal/axes/ChildTestIterator.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_AXES_ONESTEPITERATOR_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_AXES_ONESTEPITERATOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xpath::internal::axes { class OneStepIterator; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xpath::internal::axes::OneStepIterator>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xpath/internal/axes/OneStepIterator";
	using base_classes = std::tuple<scapix::java_api::com::sun::org::apache::xpath::internal::axes::ChildTestIterator>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_AXES_ONESTEPITERATOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_AXES_ONESTEPITERATOR)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_AXES_ONESTEPITERATOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/org/apache/xml/internal/dtm/DTMAxisIterator.h>
#include <scapix/java_api/com/sun/org/apache/xml/internal/dtm/DTMIterator.h>
#include <scapix/java_api/com/sun/org/apache/xpath/internal/Expression.h>
#include <scapix/java_api/java/lang/Object.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xpath::internal::axes::OneStepIterator : public jni::object_base<"com/sun/org/apache/xpath/internal/axes/OneStepIterator",
	com::sun::org::apache::xpath::internal::axes::ChildTestIterator>
{
public:

	static jni::ref<com::sun::org::apache::xpath::internal::axes::OneStepIterator> new_object(jni::ref<com::sun::org::apache::xml::internal::dtm::DTMAxisIterator> p1, jint p2) { return base_::new_object(p1, p2); }
	void setRoot(jint p1, jni::ref<java::lang::Object> p2) { return call_method<"setRoot", void>(p1, p2); }
	void detach() { return call_method<"detach", void>(); }
	jni::ref<java::lang::Object> clone() { return call_method<"clone", jni::ref<java::lang::Object>>(); }
	jni::ref<com::sun::org::apache::xml::internal::dtm::DTMIterator> cloneWithReset() { return call_method<"cloneWithReset", jni::ref<com::sun::org::apache::xml::internal::dtm::DTMIterator>>(); }
	jboolean isReverseAxes() { return call_method<"isReverseAxes", jboolean>(); }
	jint getLength() { return call_method<"getLength", jint>(); }
	void reset() { return call_method<"reset", void>(); }
	jint getAxis() { return call_method<"getAxis", jint>(); }
	jboolean deepEquals(jni::ref<com::sun::org::apache::xpath::internal::Expression> p1) { return call_method<"deepEquals", jboolean>(p1); }

protected:

	OneStepIterator(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_AXES_ONESTEPITERATOR

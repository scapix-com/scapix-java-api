// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/javax/swing/text/MutableAttributeSet.h>
#include <scapix/java_api/java/io/Serializable.h>
#include <scapix/java_api/java/lang/Cloneable.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_TEXT_SIMPLEATTRIBUTESET_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_TEXT_SIMPLEATTRIBUTESET_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::text { class SimpleAttributeSet; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::text::SimpleAttributeSet>
{
	static constexpr fixed_string class_name = "javax/swing/text/SimpleAttributeSet";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::javax::swing::text::MutableAttributeSet, scapix::java_api::java::io::Serializable, scapix::java_api::java::lang::Cloneable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TEXT_SIMPLEATTRIBUTESET_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_TEXT_SIMPLEATTRIBUTESET)
#define SCAPIX_JAVA_API_JAVAX_SWING_TEXT_SIMPLEATTRIBUTESET

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Enumeration.h>
#include <scapix/java_api/javax/swing/text/AttributeSet.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::text::SimpleAttributeSet : public jni::object_base<"javax/swing/text/SimpleAttributeSet",
	java::lang::Object,
	javax::swing::text::MutableAttributeSet,
	java::io::Serializable,
	java::lang::Cloneable>
{
public:

	static jni::ref<javax::swing::text::AttributeSet> EMPTY() { return get_static_field<"EMPTY", jni::ref<javax::swing::text::AttributeSet>>(); }

	static jni::ref<javax::swing::text::SimpleAttributeSet> new_object() { return base_::new_object(); }
	static jni::ref<javax::swing::text::SimpleAttributeSet> new_object(jni::ref<javax::swing::text::AttributeSet> p1) { return base_::new_object(p1); }
	jboolean isEmpty() { return call_method<"isEmpty", jboolean>(); }
	jint getAttributeCount() { return call_method<"getAttributeCount", jint>(); }
	jboolean isDefined(jni::ref<java::lang::Object> p1) { return call_method<"isDefined", jboolean>(p1); }
	jboolean isEqual(jni::ref<javax::swing::text::AttributeSet> p1) { return call_method<"isEqual", jboolean>(p1); }
	jni::ref<javax::swing::text::AttributeSet> copyAttributes() { return call_method<"copyAttributes", jni::ref<javax::swing::text::AttributeSet>>(); }
	jni::ref<java::util::Enumeration> getAttributeNames() { return call_method<"getAttributeNames", jni::ref<java::util::Enumeration>>(); }
	jni::ref<java::lang::Object> getAttribute(jni::ref<java::lang::Object> p1) { return call_method<"getAttribute", jni::ref<java::lang::Object>>(p1); }
	jboolean containsAttribute(jni::ref<java::lang::Object> p1, jni::ref<java::lang::Object> p2) { return call_method<"containsAttribute", jboolean>(p1, p2); }
	jboolean containsAttributes(jni::ref<javax::swing::text::AttributeSet> p1) { return call_method<"containsAttributes", jboolean>(p1); }
	void addAttribute(jni::ref<java::lang::Object> p1, jni::ref<java::lang::Object> p2) { return call_method<"addAttribute", void>(p1, p2); }
	void addAttributes(jni::ref<javax::swing::text::AttributeSet> p1) { return call_method<"addAttributes", void>(p1); }
	void removeAttribute(jni::ref<java::lang::Object> p1) { return call_method<"removeAttribute", void>(p1); }
	void removeAttributes(jni::ref<java::util::Enumeration> p1) { return call_method<"removeAttributes", void>(p1); }
	void removeAttributes(jni::ref<javax::swing::text::AttributeSet> p1) { return call_method<"removeAttributes", void>(p1); }
	jni::ref<javax::swing::text::AttributeSet> getResolveParent() { return call_method<"getResolveParent", jni::ref<javax::swing::text::AttributeSet>>(); }
	void setResolveParent(jni::ref<javax::swing::text::AttributeSet> p1) { return call_method<"setResolveParent", void>(p1); }
	jni::ref<java::lang::Object> clone() { return call_method<"clone", jni::ref<java::lang::Object>>(); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jboolean equals(jni::ref<java::lang::Object> p1) { return call_method<"equals", jboolean>(p1); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	SimpleAttributeSet(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TEXT_SIMPLEATTRIBUTESET

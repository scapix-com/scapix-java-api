// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVAX_ACCESSIBILITY_ACCESSIBLETEXTSEQUENCE_FWD
#define SCAPIX_JAVA_API_JAVAX_ACCESSIBILITY_ACCESSIBLETEXTSEQUENCE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::accessibility { class AccessibleTextSequence; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::accessibility::AccessibleTextSequence>
{
	static constexpr fixed_string class_name = "javax/accessibility/AccessibleTextSequence";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_ACCESSIBILITY_ACCESSIBLETEXTSEQUENCE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_ACCESSIBILITY_ACCESSIBLETEXTSEQUENCE)
#define SCAPIX_JAVA_API_JAVAX_ACCESSIBILITY_ACCESSIBLETEXTSEQUENCE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::accessibility::AccessibleTextSequence : public jni::object_base<"javax/accessibility/AccessibleTextSequence",
	java::lang::Object>
{
public:

	jint startIndex() { return get_field<"startIndex", jint>(); }
	void startIndex(jint v) { set_field<"startIndex", jint>(v); }
	jint endIndex() { return get_field<"endIndex", jint>(); }
	void endIndex(jint v) { set_field<"endIndex", jint>(v); }
	jni::ref<java::lang::String> text() { return get_field<"text", jni::ref<java::lang::String>>(); }
	void text(jni::ref<java::lang::String> v) { set_field<"text", jni::ref<java::lang::String>>(v); }

	static jni::ref<javax::accessibility::AccessibleTextSequence> new_object(jint p1, jint p2, jni::ref<java::lang::String> p3) { return base_::new_object(p1, p2, p3); }

protected:

	AccessibleTextSequence(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_ACCESSIBILITY_ACCESSIBLETEXTSEQUENCE

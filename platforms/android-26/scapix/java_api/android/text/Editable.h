// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/android/text/GetChars.h>
#include <scapix/java_api/android/text/Spannable.h>
#include <scapix/java_api/java/lang/Appendable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_TEXT_EDITABLE_FWD
#define SCAPIX_JAVA_API_ANDROID_TEXT_EDITABLE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::text { class Editable; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::text::Editable>
{
	static constexpr fixed_string class_name = "android/text/Editable";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::CharSequence, scapix::java_api::android::text::GetChars, scapix::java_api::android::text::Spannable, scapix::java_api::java::lang::Appendable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TEXT_EDITABLE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_TEXT_EDITABLE)
#define SCAPIX_JAVA_API_ANDROID_TEXT_EDITABLE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/text/InputFilter.h>
#include <scapix/java_api/android/text/Editable_Factory.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::text::Editable : public jni::object_base<"android/text/Editable",
	java::lang::Object,
	java::lang::CharSequence,
	android::text::GetChars,
	android::text::Spannable,
	java::lang::Appendable>
{
public:

	using Factory = Editable_Factory;

	jni::ref<android::text::Editable> replace(jint p1, jint p2, jni::ref<java::lang::CharSequence> p3, jint p4, jint p5) { return call_method<"replace", jni::ref<android::text::Editable>>(p1, p2, p3, p4, p5); }
	jni::ref<android::text::Editable> replace(jint p1, jint p2, jni::ref<java::lang::CharSequence> p3) { return call_method<"replace", jni::ref<android::text::Editable>>(p1, p2, p3); }
	jni::ref<android::text::Editable> insert(jint p1, jni::ref<java::lang::CharSequence> p2, jint p3, jint p4) { return call_method<"insert", jni::ref<android::text::Editable>>(p1, p2, p3, p4); }
	jni::ref<android::text::Editable> insert(jint p1, jni::ref<java::lang::CharSequence> p2) { return call_method<"insert", jni::ref<android::text::Editable>>(p1, p2); }
	jni::ref<android::text::Editable> delete_(jint p1, jint p2) { return call_method<"delete", jni::ref<android::text::Editable>>(p1, p2); }
	jni::ref<android::text::Editable> append(jni::ref<java::lang::CharSequence> p1) { return call_method<"append", jni::ref<android::text::Editable>>(p1); }
	jni::ref<android::text::Editable> append(jni::ref<java::lang::CharSequence> p1, jint p2, jint p3) { return call_method<"append", jni::ref<android::text::Editable>>(p1, p2, p3); }
	jni::ref<android::text::Editable> append(jchar p1) { return call_method<"append", jni::ref<android::text::Editable>>(p1); }
	void clear() { return call_method<"clear", void>(); }
	void clearSpans() { return call_method<"clearSpans", void>(); }
	void setFilters(jni::ref<jni::array<android::text::InputFilter>> p1) { return call_method<"setFilters", void>(p1); }
	jni::ref<jni::array<android::text::InputFilter>> getFilters() { return call_method<"getFilters", jni::ref<jni::array<android::text::InputFilter>>>(); }

protected:

	Editable(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TEXT_EDITABLE

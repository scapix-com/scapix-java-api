// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/CharSequence.h>

#ifndef SCAPIX_JAVA_API_ANDROID_TEXT_SPANNED_FWD
#define SCAPIX_JAVA_API_ANDROID_TEXT_SPANNED_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::text { class Spanned; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::text::Spanned>
{
	static constexpr fixed_string class_name = "android/text/Spanned";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::CharSequence>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TEXT_SPANNED_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_TEXT_SPANNED)
#define SCAPIX_JAVA_API_ANDROID_TEXT_SPANNED

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Class.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::text::Spanned : public jni::object_base<"android/text/Spanned",
	java::lang::Object,
	java::lang::CharSequence>
{
public:

	static jint SPAN_COMPOSING() { return get_static_field<"SPAN_COMPOSING", jint>(); }
	static jint SPAN_EXCLUSIVE_EXCLUSIVE() { return get_static_field<"SPAN_EXCLUSIVE_EXCLUSIVE", jint>(); }
	static jint SPAN_EXCLUSIVE_INCLUSIVE() { return get_static_field<"SPAN_EXCLUSIVE_INCLUSIVE", jint>(); }
	static jint SPAN_INCLUSIVE_EXCLUSIVE() { return get_static_field<"SPAN_INCLUSIVE_EXCLUSIVE", jint>(); }
	static jint SPAN_INCLUSIVE_INCLUSIVE() { return get_static_field<"SPAN_INCLUSIVE_INCLUSIVE", jint>(); }
	static jint SPAN_INTERMEDIATE() { return get_static_field<"SPAN_INTERMEDIATE", jint>(); }
	static jint SPAN_MARK_MARK() { return get_static_field<"SPAN_MARK_MARK", jint>(); }
	static jint SPAN_MARK_POINT() { return get_static_field<"SPAN_MARK_POINT", jint>(); }
	static jint SPAN_PARAGRAPH() { return get_static_field<"SPAN_PARAGRAPH", jint>(); }
	static jint SPAN_POINT_MARK() { return get_static_field<"SPAN_POINT_MARK", jint>(); }
	static jint SPAN_POINT_MARK_MASK() { return get_static_field<"SPAN_POINT_MARK_MASK", jint>(); }
	static jint SPAN_POINT_POINT() { return get_static_field<"SPAN_POINT_POINT", jint>(); }
	static jint SPAN_PRIORITY() { return get_static_field<"SPAN_PRIORITY", jint>(); }
	static jint SPAN_PRIORITY_SHIFT() { return get_static_field<"SPAN_PRIORITY_SHIFT", jint>(); }
	static jint SPAN_USER() { return get_static_field<"SPAN_USER", jint>(); }
	static jint SPAN_USER_SHIFT() { return get_static_field<"SPAN_USER_SHIFT", jint>(); }

	jni::ref<jni::array<java::lang::Object>> getSpans(jint p1, jint p2, jni::ref<java::lang::Class> p3) { return call_method<"getSpans", jni::ref<jni::array<java::lang::Object>>>(p1, p2, p3); }
	jint getSpanStart(jni::ref<java::lang::Object> p1) { return call_method<"getSpanStart", jint>(p1); }
	jint getSpanEnd(jni::ref<java::lang::Object> p1) { return call_method<"getSpanEnd", jint>(p1); }
	jint getSpanFlags(jni::ref<java::lang::Object> p1) { return call_method<"getSpanFlags", jint>(p1); }
	jint nextSpanTransition(jint p1, jint p2, jni::ref<java::lang::Class> p3) { return call_method<"nextSpanTransition", jint>(p1, p2, p3); }

protected:

	Spanned(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TEXT_SPANNED
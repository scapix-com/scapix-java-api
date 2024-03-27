// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_TEXT_UTIL_LINKIFY_FWD
#define SCAPIX_JAVA_API_ANDROID_TEXT_UTIL_LINKIFY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::text::util { class Linkify; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::text::util::Linkify>
{
	static constexpr fixed_string class_name = "android/text/util/Linkify";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TEXT_UTIL_LINKIFY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_TEXT_UTIL_LINKIFY)
#define SCAPIX_JAVA_API_ANDROID_TEXT_UTIL_LINKIFY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/text/Spannable.h>
#include <scapix/java_api/android/text/util/Linkify_MatchFilter.h>
#include <scapix/java_api/android/text/util/Linkify_TransformFilter.h>
#include <scapix/java_api/android/widget/TextView.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/regex/Pattern.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::text::util::Linkify : public jni::object_base<"android/text/util/Linkify",
	java::lang::Object>
{
public:

	using TransformFilter = Linkify_TransformFilter;
	using MatchFilter = Linkify_MatchFilter;

	static jint ALL() { return get_static_field<"ALL", jint>(); }
	static jint EMAIL_ADDRESSES() { return get_static_field<"EMAIL_ADDRESSES", jint>(); }
	static jint MAP_ADDRESSES() { return get_static_field<"MAP_ADDRESSES", jint>(); }
	static jint PHONE_NUMBERS() { return get_static_field<"PHONE_NUMBERS", jint>(); }
	static jint WEB_URLS() { return get_static_field<"WEB_URLS", jint>(); }
	static jni::ref<android::text::util::Linkify_MatchFilter> sPhoneNumberMatchFilter() { return get_static_field<"sPhoneNumberMatchFilter", jni::ref<android::text::util::Linkify_MatchFilter>>(); }
	static jni::ref<android::text::util::Linkify_TransformFilter> sPhoneNumberTransformFilter() { return get_static_field<"sPhoneNumberTransformFilter", jni::ref<android::text::util::Linkify_TransformFilter>>(); }
	static jni::ref<android::text::util::Linkify_MatchFilter> sUrlMatchFilter() { return get_static_field<"sUrlMatchFilter", jni::ref<android::text::util::Linkify_MatchFilter>>(); }

	static jni::ref<android::text::util::Linkify> new_object() { return base_::new_object(); }
	static jboolean addLinks(jni::ref<android::text::Spannable> text, jint mask) { return call_static_method<"addLinks", jboolean>(text, mask); }
	static jboolean addLinks(jni::ref<android::widget::TextView> text, jint mask) { return call_static_method<"addLinks", jboolean>(text, mask); }
	static void addLinks(jni::ref<android::widget::TextView> text, jni::ref<java::util::regex::Pattern> pattern, jni::ref<java::lang::String> scheme) { return call_static_method<"addLinks", void>(text, pattern, scheme); }
	static void addLinks(jni::ref<android::widget::TextView> text, jni::ref<java::util::regex::Pattern> pattern, jni::ref<java::lang::String> scheme, jni::ref<android::text::util::Linkify_MatchFilter> matchFilter, jni::ref<android::text::util::Linkify_TransformFilter> transformFilter) { return call_static_method<"addLinks", void>(text, pattern, scheme, matchFilter, transformFilter); }
	static void addLinks(jni::ref<android::widget::TextView> text, jni::ref<java::util::regex::Pattern> pattern, jni::ref<java::lang::String> defaultScheme, jni::ref<jni::array<java::lang::String>> schemes, jni::ref<android::text::util::Linkify_MatchFilter> matchFilter, jni::ref<android::text::util::Linkify_TransformFilter> transformFilter) { return call_static_method<"addLinks", void>(text, pattern, defaultScheme, schemes, matchFilter, transformFilter); }
	static jboolean addLinks(jni::ref<android::text::Spannable> text, jni::ref<java::util::regex::Pattern> pattern, jni::ref<java::lang::String> scheme) { return call_static_method<"addLinks", jboolean>(text, pattern, scheme); }
	static jboolean addLinks(jni::ref<android::text::Spannable> spannable, jni::ref<java::util::regex::Pattern> pattern, jni::ref<java::lang::String> scheme, jni::ref<android::text::util::Linkify_MatchFilter> matchFilter, jni::ref<android::text::util::Linkify_TransformFilter> transformFilter) { return call_static_method<"addLinks", jboolean>(spannable, pattern, scheme, matchFilter, transformFilter); }
	static jboolean addLinks(jni::ref<android::text::Spannable> spannable, jni::ref<java::util::regex::Pattern> pattern, jni::ref<java::lang::String> defaultScheme, jni::ref<jni::array<java::lang::String>> schemes, jni::ref<android::text::util::Linkify_MatchFilter> matchFilter, jni::ref<android::text::util::Linkify_TransformFilter> transformFilter) { return call_static_method<"addLinks", jboolean>(spannable, pattern, defaultScheme, schemes, matchFilter, transformFilter); }

protected:

	Linkify(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TEXT_UTIL_LINKIFY

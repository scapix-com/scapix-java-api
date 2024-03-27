// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_ICU_TEXT_SYMBOLTABLE_FWD
#define SCAPIX_JAVA_API_ANDROID_ICU_TEXT_SYMBOLTABLE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::icu::text { class SymbolTable; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::icu::text::SymbolTable>
{
	static constexpr fixed_string class_name = "android/icu/text/SymbolTable";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_ICU_TEXT_SYMBOLTABLE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_ICU_TEXT_SYMBOLTABLE)
#define SCAPIX_JAVA_API_ANDROID_ICU_TEXT_SYMBOLTABLE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/icu/text/UnicodeMatcher.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/text/ParsePosition.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::icu::text::SymbolTable : public jni::object_base<"android/icu/text/SymbolTable",
	java::lang::Object>
{
public:

	static jchar SYMBOL_REF() { return get_static_field<"SYMBOL_REF", jchar>(); }

	jni::ref<jni::array<jchar>> lookup(jni::ref<java::lang::String> p1) { return call_method<"lookup", jni::ref<jni::array<jchar>>>(p1); }
	jni::ref<android::icu::text::UnicodeMatcher> lookupMatcher(jint p1) { return call_method<"lookupMatcher", jni::ref<android::icu::text::UnicodeMatcher>>(p1); }
	jni::ref<java::lang::String> parseReference(jni::ref<java::lang::String> p1, jni::ref<java::text::ParsePosition> p2, jint p3) { return call_method<"parseReference", jni::ref<java::lang::String>>(p1, p2, p3); }

protected:

	SymbolTable(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_ICU_TEXT_SYMBOLTABLE
// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_TEXT_NORMALIZER_UNICODESETSTRINGSPAN_OFFSETLIST_FWD
#define SCAPIX_JAVA_API_SUN_TEXT_NORMALIZER_UNICODESETSTRINGSPAN_OFFSETLIST_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::text::normalizer { class UnicodeSetStringSpan_OffsetList; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::text::normalizer::UnicodeSetStringSpan_OffsetList>
{
	static constexpr fixed_string class_name = "sun/text/normalizer/UnicodeSetStringSpan$OffsetList";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_TEXT_NORMALIZER_UNICODESETSTRINGSPAN_OFFSETLIST_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_TEXT_NORMALIZER_UNICODESETSTRINGSPAN_OFFSETLIST)
#define SCAPIX_JAVA_API_SUN_TEXT_NORMALIZER_UNICODESETSTRINGSPAN_OFFSETLIST

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/sun/text/normalizer/OutputInt.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::text::normalizer::UnicodeSetStringSpan_OffsetList : public jni::object_base<"sun/text/normalizer/UnicodeSetStringSpan$OffsetList",
	java::lang::Object>
{
public:

	static jni::ref<sun::text::normalizer::UnicodeSetStringSpan_OffsetList> new_object() { return base_::new_object(); }
	void setMaxLength(jint maxLength) { return call_method<"setMaxLength", void>(maxLength); }
	void clear() { return call_method<"clear", void>(); }
	jboolean isEmpty() { return call_method<"isEmpty", jboolean>(); }
	void shift(jint delta) { return call_method<"shift", void>(delta); }
	void addOffset(jint offset) { return call_method<"addOffset", void>(offset); }
	void addOffsetAndCount(jint offset, jint count) { return call_method<"addOffsetAndCount", void>(offset, count); }
	jboolean containsOffset(jint offset) { return call_method<"containsOffset", jboolean>(offset); }
	jboolean hasCountAtOffset(jint offset, jint count) { return call_method<"hasCountAtOffset", jboolean>(offset, count); }
	jint popMinimum(jni::ref<sun::text::normalizer::OutputInt> outCount) { return call_method<"popMinimum", jint>(outCount); }

protected:

	UnicodeSetStringSpan_OffsetList(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_TEXT_NORMALIZER_UNICODESETSTRINGSPAN_OFFSETLIST

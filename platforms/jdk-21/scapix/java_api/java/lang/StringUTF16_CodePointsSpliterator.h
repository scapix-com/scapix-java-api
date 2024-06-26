// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/Spliterator_OfInt.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_STRINGUTF16_CODEPOINTSSPLITERATOR_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_STRINGUTF16_CODEPOINTSSPLITERATOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang { class StringUTF16_CodePointsSpliterator; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::StringUTF16_CodePointsSpliterator>
{
	static constexpr fixed_string class_name = "java/lang/StringUTF16$CodePointsSpliterator";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::util::Spliterator_OfInt>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_STRINGUTF16_CODEPOINTSSPLITERATOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_STRINGUTF16_CODEPOINTSSPLITERATOR)
#define SCAPIX_JAVA_API_JAVA_LANG_STRINGUTF16_CODEPOINTSSPLITERATOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/function/IntConsumer.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::lang::StringUTF16_CodePointsSpliterator : public jni::object_base<"java/lang/StringUTF16$CodePointsSpliterator",
	java::lang::Object,
	java::util::Spliterator_OfInt>
{
public:

	jni::ref<java::util::Spliterator_OfInt> trySplit() { return call_method<"trySplit", jni::ref<java::util::Spliterator_OfInt>>(); }
	void forEachRemaining(jni::ref<java::util::function::IntConsumer> action) { return call_method<"forEachRemaining", void>(action); }
	jboolean tryAdvance(jni::ref<java::util::function::IntConsumer> action) { return call_method<"tryAdvance", jboolean>(action); }
	jlong estimateSize() { return call_method<"estimateSize", jlong>(); }
	jint characteristics() { return call_method<"characteristics", jint>(); }

protected:

	StringUTF16_CodePointsSpliterator(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_STRINGUTF16_CODEPOINTSSPLITERATOR

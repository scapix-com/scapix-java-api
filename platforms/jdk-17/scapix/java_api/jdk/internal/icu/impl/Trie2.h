// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/Iterable.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_ICU_IMPL_TRIE2_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_ICU_IMPL_TRIE2_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::icu::impl { class Trie2; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::icu::impl::Trie2>
{
	static constexpr fixed_string class_name = "jdk/internal/icu/impl/Trie2";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::Iterable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_ICU_IMPL_TRIE2_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_ICU_IMPL_TRIE2)
#define SCAPIX_JAVA_API_JDK_INTERNAL_ICU_IMPL_TRIE2

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/nio/ByteBuffer.h>
#include <scapix/java_api/java/util/Iterator.h>
#include <scapix/java_api/jdk/internal/icu/impl/Trie2_ValueMapper.h>
#include <scapix/java_api/jdk/internal/icu/impl/Trie2_Range.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class jdk::internal::icu::impl::Trie2 : public jni::object_base<"jdk/internal/icu/impl/Trie2",
	java::lang::Object,
	java::lang::Iterable>
{
public:

	using ValueMapper = Trie2_ValueMapper;
	using Range = Trie2_Range;

	static jni::ref<jdk::internal::icu::impl::Trie2> createFromSerialized(jni::ref<java::nio::ByteBuffer> bytes) { return call_static_method<"createFromSerialized", jni::ref<jdk::internal::icu::impl::Trie2>>(bytes); }
	jint get(jint p1) { return call_method<"get", jint>(p1); }
	jint getFromU16SingleLead(jchar p1) { return call_method<"getFromU16SingleLead", jint>(p1); }
	jni::ref<java::util::Iterator> iterator() { return call_method<"iterator", jni::ref<java::util::Iterator>>(); }
	jni::ref<java::util::Iterator> iterator(jni::ref<jdk::internal::icu::impl::Trie2_ValueMapper> mapper) { return call_method<"iterator", jni::ref<java::util::Iterator>>(mapper); }

protected:

	Trie2(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_ICU_IMPL_TRIE2

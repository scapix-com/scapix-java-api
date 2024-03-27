// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/Collections_UnmodifiableSequencedCollection.h>
#include <scapix/java_api/java/util/SequencedSet.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_COLLECTIONS_UNMODIFIABLESEQUENCEDSET_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_COLLECTIONS_UNMODIFIABLESEQUENCEDSET_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util { class Collections_UnmodifiableSequencedSet; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::Collections_UnmodifiableSequencedSet>
{
	static constexpr fixed_string class_name = "java/util/Collections$UnmodifiableSequencedSet";
	using base_classes = std::tuple<scapix::java_api::java::util::Collections_UnmodifiableSequencedCollection, scapix::java_api::java::util::SequencedSet, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_COLLECTIONS_UNMODIFIABLESEQUENCEDSET_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_COLLECTIONS_UNMODIFIABLESEQUENCEDSET)
#define SCAPIX_JAVA_API_JAVA_UTIL_COLLECTIONS_UNMODIFIABLESEQUENCEDSET

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::Collections_UnmodifiableSequencedSet : public jni::object_base<"java/util/Collections$UnmodifiableSequencedSet",
	java::util::Collections_UnmodifiableSequencedCollection,
	java::util::SequencedSet,
	java::io::Serializable>
{
public:

	jboolean equals(jni::ref<java::lang::Object> o) { return call_method<"equals", jboolean>(o); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jni::ref<java::util::SequencedSet> reversed() { return call_method<"reversed", jni::ref<java::util::SequencedSet>>(); }

protected:

	Collections_UnmodifiableSequencedSet(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_COLLECTIONS_UNMODIFIABLESEQUENCEDSET

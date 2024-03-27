// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/AbstractSet.h>
#include <scapix/java_api/java/util/Set.h>
#include <scapix/java_api/java/lang/Cloneable.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_HASHSET_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_HASHSET_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util { class HashSet; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::HashSet>
{
	static constexpr fixed_string class_name = "java/util/HashSet";
	using base_classes = std::tuple<scapix::java_api::java::util::AbstractSet, scapix::java_api::java::util::Set, scapix::java_api::java::lang::Cloneable, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_HASHSET_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_HASHSET)
#define SCAPIX_JAVA_API_JAVA_UTIL_HASHSET

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/Collection.h>
#include <scapix/java_api/java/util/Iterator.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::util::HashSet : public jni::object_base<"java/util/HashSet",
	java::util::AbstractSet,
	java::util::Set,
	java::lang::Cloneable,
	java::io::Serializable>
{
public:

	static jni::ref<java::util::HashSet> new_object() { return base_::new_object(); }
	static jni::ref<java::util::HashSet> new_object(jint capacity) { return base_::new_object(capacity); }
	static jni::ref<java::util::HashSet> new_object(jint capacity, jfloat loadFactor) { return base_::new_object(capacity, loadFactor); }
	static jni::ref<java::util::HashSet> new_object(jni::ref<java::util::Collection> collection) { return base_::new_object(collection); }
	jboolean add(jni::ref<java::lang::Object> object) { return call_method<"add", jboolean>(object); }
	void clear() { return call_method<"clear", void>(); }
	jni::ref<java::lang::Object> clone() { return call_method<"clone", jni::ref<java::lang::Object>>(); }
	jboolean contains(jni::ref<java::lang::Object> object) { return call_method<"contains", jboolean>(object); }
	jboolean isEmpty() { return call_method<"isEmpty", jboolean>(); }
	jni::ref<java::util::Iterator> iterator() { return call_method<"iterator", jni::ref<java::util::Iterator>>(); }
	jboolean remove(jni::ref<java::lang::Object> object) { return call_method<"remove", jboolean>(object); }
	jint size() { return call_method<"size", jint>(); }

protected:

	HashSet(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_HASHSET
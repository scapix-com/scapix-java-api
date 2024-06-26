// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/Collections_EmptyIterator.h>
#include <scapix/java_api/java/util/ListIterator.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_COLLECTIONS_EMPTYLISTITERATOR_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_COLLECTIONS_EMPTYLISTITERATOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util { class Collections_EmptyListIterator; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::Collections_EmptyListIterator>
{
	static constexpr fixed_string class_name = "java/util/Collections$EmptyListIterator";
	using base_classes = std::tuple<scapix::java_api::java::util::Collections_EmptyIterator, scapix::java_api::java::util::ListIterator>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_COLLECTIONS_EMPTYLISTITERATOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_COLLECTIONS_EMPTYLISTITERATOR)
#define SCAPIX_JAVA_API_JAVA_UTIL_COLLECTIONS_EMPTYLISTITERATOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::Collections_EmptyListIterator : public jni::object_base<"java/util/Collections$EmptyListIterator",
	java::util::Collections_EmptyIterator,
	java::util::ListIterator>
{
public:

	jboolean hasPrevious() { return call_method<"hasPrevious", jboolean>(); }
	jni::ref<java::lang::Object> previous() { return call_method<"previous", jni::ref<java::lang::Object>>(); }
	jint nextIndex() { return call_method<"nextIndex", jint>(); }
	jint previousIndex() { return call_method<"previousIndex", jint>(); }
	void set(jni::ref<java::lang::Object> e) { return call_method<"set", void>(e); }
	void add(jni::ref<java::lang::Object> e) { return call_method<"add", void>(e); }

protected:

	Collections_EmptyListIterator(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_COLLECTIONS_EMPTYLISTITERATOR

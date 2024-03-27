// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/ListIterator.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_COPYONWRITEARRAYLIST_COWSUBLISTITERATOR_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_COPYONWRITEARRAYLIST_COWSUBLISTITERATOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::concurrent { class CopyOnWriteArrayList_COWSubListIterator; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::concurrent::CopyOnWriteArrayList_COWSubListIterator>
{
	static constexpr fixed_string class_name = "java/util/concurrent/CopyOnWriteArrayList$COWSubListIterator";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::util::ListIterator>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_COPYONWRITEARRAYLIST_COWSUBLISTITERATOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_COPYONWRITEARRAYLIST_COWSUBLISTITERATOR)
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_COPYONWRITEARRAYLIST_COWSUBLISTITERATOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/function/Consumer.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::concurrent::CopyOnWriteArrayList_COWSubListIterator : public jni::object_base<"java/util/concurrent/CopyOnWriteArrayList$COWSubListIterator",
	java::lang::Object,
	java::util::ListIterator>
{
public:

	jboolean hasNext() { return call_method<"hasNext", jboolean>(); }
	jni::ref<java::lang::Object> next() { return call_method<"next", jni::ref<java::lang::Object>>(); }
	jboolean hasPrevious() { return call_method<"hasPrevious", jboolean>(); }
	jni::ref<java::lang::Object> previous() { return call_method<"previous", jni::ref<java::lang::Object>>(); }
	jint nextIndex() { return call_method<"nextIndex", jint>(); }
	jint previousIndex() { return call_method<"previousIndex", jint>(); }
	void remove() { return call_method<"remove", void>(); }
	void set(jni::ref<java::lang::Object> e) { return call_method<"set", void>(e); }
	void add(jni::ref<java::lang::Object> e) { return call_method<"add", void>(e); }
	void forEachRemaining(jni::ref<java::util::function::Consumer> action) { return call_method<"forEachRemaining", void>(action); }

protected:

	CopyOnWriteArrayList_COWSubListIterator(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_COPYONWRITEARRAYLIST_COWSUBLISTITERATOR

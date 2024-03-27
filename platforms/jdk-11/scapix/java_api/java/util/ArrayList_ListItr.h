// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/ArrayList_Itr.h>
#include <scapix/java_api/java/util/ListIterator.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_ARRAYLIST_LISTITR_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_ARRAYLIST_LISTITR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util { class ArrayList_ListItr; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::ArrayList_ListItr>
{
	static constexpr fixed_string class_name = "java/util/ArrayList$ListItr";
	using base_classes = std::tuple<scapix::java_api::java::util::ArrayList_Itr, scapix::java_api::java::util::ListIterator>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_ARRAYLIST_LISTITR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_ARRAYLIST_LISTITR)
#define SCAPIX_JAVA_API_JAVA_UTIL_ARRAYLIST_LISTITR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::ArrayList_ListItr : public jni::object_base<"java/util/ArrayList$ListItr",
	java::util::ArrayList_Itr,
	java::util::ListIterator>
{
public:

	jboolean hasPrevious() { return call_method<"hasPrevious", jboolean>(); }
	jint nextIndex() { return call_method<"nextIndex", jint>(); }
	jint previousIndex() { return call_method<"previousIndex", jint>(); }
	jni::ref<java::lang::Object> previous() { return call_method<"previous", jni::ref<java::lang::Object>>(); }
	void set(jni::ref<java::lang::Object> e) { return call_method<"set", void>(e); }
	void add(jni::ref<java::lang::Object> e) { return call_method<"add", void>(e); }

protected:

	ArrayList_ListItr(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_ARRAYLIST_LISTITR

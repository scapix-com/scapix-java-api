// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/ref/WeakReference.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_THREADLOCAL_THREADLOCALMAP_ENTRY_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_THREADLOCAL_THREADLOCALMAP_ENTRY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang { class ThreadLocal_ThreadLocalMap_Entry; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::ThreadLocal_ThreadLocalMap_Entry>
{
	static constexpr fixed_string class_name = "java/lang/ThreadLocal$ThreadLocalMap$Entry";
	using base_classes = std::tuple<scapix::java_api::java::lang::ref::WeakReference>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_THREADLOCAL_THREADLOCALMAP_ENTRY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_THREADLOCAL_THREADLOCALMAP_ENTRY)
#define SCAPIX_JAVA_API_JAVA_LANG_THREADLOCAL_THREADLOCALMAP_ENTRY

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::lang::ThreadLocal_ThreadLocalMap_Entry : public jni::object_base<"java/lang/ThreadLocal$ThreadLocalMap$Entry",
	java::lang::ref::WeakReference>
{
public:


protected:

	ThreadLocal_ThreadLocalMap_Entry(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_THREADLOCAL_THREADLOCALMAP_ENTRY
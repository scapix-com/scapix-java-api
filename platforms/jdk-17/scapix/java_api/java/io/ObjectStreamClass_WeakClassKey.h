// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/ref/WeakReference.h>

#ifndef SCAPIX_JAVA_API_JAVA_IO_OBJECTSTREAMCLASS_WEAKCLASSKEY_FWD
#define SCAPIX_JAVA_API_JAVA_IO_OBJECTSTREAMCLASS_WEAKCLASSKEY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::io { class ObjectStreamClass_WeakClassKey; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::io::ObjectStreamClass_WeakClassKey>
{
	static constexpr fixed_string class_name = "java/io/ObjectStreamClass$WeakClassKey";
	using base_classes = std::tuple<scapix::java_api::java::lang::ref::WeakReference>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_IO_OBJECTSTREAMCLASS_WEAKCLASSKEY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_IO_OBJECTSTREAMCLASS_WEAKCLASSKEY)
#define SCAPIX_JAVA_API_JAVA_IO_OBJECTSTREAMCLASS_WEAKCLASSKEY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::io::ObjectStreamClass_WeakClassKey : public jni::object_base<"java/io/ObjectStreamClass$WeakClassKey",
	java::lang::ref::WeakReference>
{
public:

	jint hashCode() { return call_method<"hashCode", jint>(); }
	jboolean equals(jni::ref<java::lang::Object> obj) { return call_method<"equals", jboolean>(obj); }

protected:

	ObjectStreamClass_WeakClassKey(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_IO_OBJECTSTREAMCLASS_WEAKCLASSKEY
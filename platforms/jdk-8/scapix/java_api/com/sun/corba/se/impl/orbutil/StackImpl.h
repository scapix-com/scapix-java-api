// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ORBUTIL_STACKIMPL_FWD
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ORBUTIL_STACKIMPL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::corba::se::impl::orbutil { class StackImpl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::corba::se::impl::orbutil::StackImpl>
{
	static constexpr fixed_string class_name = "com/sun/corba/se/impl/orbutil/StackImpl";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ORBUTIL_STACKIMPL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ORBUTIL_STACKIMPL)
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ORBUTIL_STACKIMPL

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::corba::se::impl::orbutil::StackImpl : public jni::object_base<"com/sun/corba/se/impl/orbutil/StackImpl",
	java::lang::Object>
{
public:

	static jni::ref<com::sun::corba::se::impl::orbutil::StackImpl> new_object() { return base_::new_object(); }
	jboolean empty() { return call_method<"empty", jboolean>(); }
	jni::ref<java::lang::Object> peek() { return call_method<"peek", jni::ref<java::lang::Object>>(); }
	jni::ref<java::lang::Object> pop() { return call_method<"pop", jni::ref<java::lang::Object>>(); }
	jni::ref<java::lang::Object> push(jni::ref<java::lang::Object> p1) { return call_method<"push", jni::ref<java::lang::Object>>(p1); }

protected:

	StackImpl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ORBUTIL_STACKIMPL
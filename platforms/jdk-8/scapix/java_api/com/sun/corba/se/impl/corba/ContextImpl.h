// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/org/omg/CORBA/Context.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_CORBA_CONTEXTIMPL_FWD
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_CORBA_CONTEXTIMPL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::corba::se::impl::corba { class ContextImpl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::corba::se::impl::corba::ContextImpl>
{
	static constexpr fixed_string class_name = "com/sun/corba/se/impl/corba/ContextImpl";
	using base_classes = std::tuple<scapix::java_api::org::omg::CORBA::Context>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_CORBA_CONTEXTIMPL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_CORBA_CONTEXTIMPL)
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_CORBA_CONTEXTIMPL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/org/omg/CORBA/Any.h>
#include <scapix/java_api/org/omg/CORBA/NVList.h>
#include <scapix/java_api/org/omg/CORBA/ORB.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::corba::se::impl::corba::ContextImpl : public jni::object_base<"com/sun/corba/se/impl/corba/ContextImpl",
	org::omg::CORBA::Context>
{
public:

	static jni::ref<com::sun::corba::se::impl::corba::ContextImpl> new_object(jni::ref<org::omg::CORBA::ORB> p1) { return base_::new_object(p1); }
	static jni::ref<com::sun::corba::se::impl::corba::ContextImpl> new_object(jni::ref<org::omg::CORBA::Context> p1) { return base_::new_object(p1); }
	jni::ref<java::lang::String> context_name() { return call_method<"context_name", jni::ref<java::lang::String>>(); }
	jni::ref<org::omg::CORBA::Context> parent() { return call_method<"parent", jni::ref<org::omg::CORBA::Context>>(); }
	jni::ref<org::omg::CORBA::Context> create_child(jni::ref<java::lang::String> p1) { return call_method<"create_child", jni::ref<org::omg::CORBA::Context>>(p1); }
	void set_one_value(jni::ref<java::lang::String> p1, jni::ref<org::omg::CORBA::Any> p2) { return call_method<"set_one_value", void>(p1, p2); }
	void set_values(jni::ref<org::omg::CORBA::NVList> p1) { return call_method<"set_values", void>(p1); }
	void delete_values(jni::ref<java::lang::String> p1) { return call_method<"delete_values", void>(p1); }
	jni::ref<org::omg::CORBA::NVList> get_values(jni::ref<java::lang::String> p1, jint p2, jni::ref<java::lang::String> p3) { return call_method<"get_values", jni::ref<org::omg::CORBA::NVList>>(p1, p2, p3); }

protected:

	ContextImpl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_CORBA_CONTEXTIMPL

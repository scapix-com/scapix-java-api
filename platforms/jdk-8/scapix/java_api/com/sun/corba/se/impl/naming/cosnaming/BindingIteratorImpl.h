// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/org/omg/CosNaming/BindingIteratorPOA.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_NAMING_COSNAMING_BINDINGITERATORIMPL_FWD
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_NAMING_COSNAMING_BINDINGITERATORIMPL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::corba::se::impl::naming::cosnaming { class BindingIteratorImpl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::corba::se::impl::naming::cosnaming::BindingIteratorImpl>
{
	static constexpr fixed_string class_name = "com/sun/corba/se/impl/naming/cosnaming/BindingIteratorImpl";
	using base_classes = std::tuple<scapix::java_api::org::omg::CosNaming::BindingIteratorPOA>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_NAMING_COSNAMING_BINDINGITERATORIMPL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_NAMING_COSNAMING_BINDINGITERATORIMPL)
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_NAMING_COSNAMING_BINDINGITERATORIMPL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/org/omg/CORBA/ORB.h>
#include <scapix/java_api/org/omg/CosNaming/BindingHolder.h>
#include <scapix/java_api/org/omg/CosNaming/BindingListHolder.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::corba::se::impl::naming::cosnaming::BindingIteratorImpl : public jni::object_base<"com/sun/corba/se/impl/naming/cosnaming/BindingIteratorImpl",
	org::omg::CosNaming::BindingIteratorPOA>
{
public:

	static jni::ref<com::sun::corba::se::impl::naming::cosnaming::BindingIteratorImpl> new_object(jni::ref<org::omg::CORBA::ORB> p1) { return base_::new_object(p1); }
	jboolean next_one(jni::ref<org::omg::CosNaming::BindingHolder> p1) { return call_method<"next_one", jboolean>(p1); }
	jboolean next_n(jint p1, jni::ref<org::omg::CosNaming::BindingListHolder> p2) { return call_method<"next_n", jboolean>(p1, p2); }
	jboolean list(jint p1, jni::ref<org::omg::CosNaming::BindingListHolder> p2) { return call_method<"list", jboolean>(p1, p2); }
	void destroy() { return call_method<"destroy", void>(); }

protected:

	BindingIteratorImpl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_NAMING_COSNAMING_BINDINGITERATORIMPL
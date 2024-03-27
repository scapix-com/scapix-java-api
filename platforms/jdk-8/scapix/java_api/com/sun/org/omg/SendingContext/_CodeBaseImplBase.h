// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/org/omg/CORBA/portable/ObjectImpl.h>
#include <scapix/java_api/com/sun/org/omg/SendingContext/CodeBase.h>
#include <scapix/java_api/org/omg/CORBA/portable/InvokeHandler.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_OMG_SENDINGCONTEXT__CODEBASEIMPLBASE_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_OMG_SENDINGCONTEXT__CODEBASEIMPLBASE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::omg::SendingContext { class _CodeBaseImplBase; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::omg::SendingContext::_CodeBaseImplBase>
{
	static constexpr fixed_string class_name = "com/sun/org/omg/SendingContext/_CodeBaseImplBase";
	using base_classes = std::tuple<scapix::java_api::org::omg::CORBA::portable::ObjectImpl, scapix::java_api::com::sun::org::omg::SendingContext::CodeBase, scapix::java_api::org::omg::CORBA::portable::InvokeHandler>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_OMG_SENDINGCONTEXT__CODEBASEIMPLBASE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_OMG_SENDINGCONTEXT__CODEBASEIMPLBASE)
#define SCAPIX_JAVA_API_COM_SUN_ORG_OMG_SENDINGCONTEXT__CODEBASEIMPLBASE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/org/omg/CORBA/portable/InputStream.h>
#include <scapix/java_api/org/omg/CORBA/portable/OutputStream.h>
#include <scapix/java_api/org/omg/CORBA/portable/ResponseHandler.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::omg::SendingContext::_CodeBaseImplBase : public jni::object_base<"com/sun/org/omg/SendingContext/_CodeBaseImplBase",
	org::omg::CORBA::portable::ObjectImpl,
	com::sun::org::omg::SendingContext::CodeBase,
	org::omg::CORBA::portable::InvokeHandler>
{
public:

	static jni::ref<com::sun::org::omg::SendingContext::_CodeBaseImplBase> new_object() { return base_::new_object(); }
	jni::ref<org::omg::CORBA::portable::OutputStream> _invoke(jni::ref<java::lang::String> p1, jni::ref<org::omg::CORBA::portable::InputStream> p2, jni::ref<org::omg::CORBA::portable::ResponseHandler> p3) { return call_method<"_invoke", jni::ref<org::omg::CORBA::portable::OutputStream>>(p1, p2, p3); }
	jni::ref<jni::array<java::lang::String>> _ids() { return call_method<"_ids", jni::ref<jni::array<java::lang::String>>>(); }

protected:

	_CodeBaseImplBase(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_OMG_SENDINGCONTEXT__CODEBASEIMPLBASE

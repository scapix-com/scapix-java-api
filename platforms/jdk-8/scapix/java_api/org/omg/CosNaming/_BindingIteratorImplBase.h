// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/org/omg/CORBA/DynamicImplementation.h>
#include <scapix/java_api/org/omg/CosNaming/BindingIterator.h>

#ifndef SCAPIX_JAVA_API_ORG_OMG_COSNAMING__BINDINGITERATORIMPLBASE_FWD
#define SCAPIX_JAVA_API_ORG_OMG_COSNAMING__BINDINGITERATORIMPLBASE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::omg::CosNaming { class _BindingIteratorImplBase; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::omg::CosNaming::_BindingIteratorImplBase>
{
	static constexpr fixed_string class_name = "org/omg/CosNaming/_BindingIteratorImplBase";
	using base_classes = std::tuple<scapix::java_api::org::omg::CORBA::DynamicImplementation, scapix::java_api::org::omg::CosNaming::BindingIterator>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_OMG_COSNAMING__BINDINGITERATORIMPLBASE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_OMG_COSNAMING__BINDINGITERATORIMPLBASE)
#define SCAPIX_JAVA_API_ORG_OMG_COSNAMING__BINDINGITERATORIMPLBASE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/org/omg/CORBA/ServerRequest.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::omg::CosNaming::_BindingIteratorImplBase : public jni::object_base<"org/omg/CosNaming/_BindingIteratorImplBase",
	org::omg::CORBA::DynamicImplementation,
	org::omg::CosNaming::BindingIterator>
{
public:

	static jni::ref<org::omg::CosNaming::_BindingIteratorImplBase> new_object() { return base_::new_object(); }
	jni::ref<jni::array<java::lang::String>> _ids() { return call_method<"_ids", jni::ref<jni::array<java::lang::String>>>(); }
	void invoke(jni::ref<org::omg::CORBA::ServerRequest> p1) { return call_method<"invoke", void>(p1); }

protected:

	_BindingIteratorImplBase(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_OMG_COSNAMING__BINDINGITERATORIMPLBASE
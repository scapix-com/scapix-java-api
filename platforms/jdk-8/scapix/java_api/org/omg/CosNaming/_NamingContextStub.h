// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/org/omg/CORBA/portable/ObjectImpl.h>
#include <scapix/java_api/org/omg/CosNaming/NamingContext.h>

#ifndef SCAPIX_JAVA_API_ORG_OMG_COSNAMING__NAMINGCONTEXTSTUB_FWD
#define SCAPIX_JAVA_API_ORG_OMG_COSNAMING__NAMINGCONTEXTSTUB_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::omg::CosNaming { class _NamingContextStub; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::omg::CosNaming::_NamingContextStub>
{
	static constexpr fixed_string class_name = "org/omg/CosNaming/_NamingContextStub";
	using base_classes = std::tuple<scapix::java_api::org::omg::CORBA::portable::ObjectImpl, scapix::java_api::org::omg::CosNaming::NamingContext>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_OMG_COSNAMING__NAMINGCONTEXTSTUB_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_OMG_COSNAMING__NAMINGCONTEXTSTUB)
#define SCAPIX_JAVA_API_ORG_OMG_COSNAMING__NAMINGCONTEXTSTUB

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/org/omg/CORBA/Object.h>
#include <scapix/java_api/org/omg/CosNaming/BindingIteratorHolder.h>
#include <scapix/java_api/org/omg/CosNaming/BindingListHolder.h>
#include <scapix/java_api/org/omg/CosNaming/NameComponent.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::omg::CosNaming::_NamingContextStub : public jni::object_base<"org/omg/CosNaming/_NamingContextStub",
	org::omg::CORBA::portable::ObjectImpl,
	org::omg::CosNaming::NamingContext>
{
public:

	static jni::ref<org::omg::CosNaming::_NamingContextStub> new_object() { return base_::new_object(); }
	void bind(jni::ref<jni::array<org::omg::CosNaming::NameComponent>> p1, jni::ref<org::omg::CORBA::Object> p2) { return call_method<"bind", void>(p1, p2); }
	void bind_context(jni::ref<jni::array<org::omg::CosNaming::NameComponent>> p1, jni::ref<org::omg::CosNaming::NamingContext> p2) { return call_method<"bind_context", void>(p1, p2); }
	void rebind(jni::ref<jni::array<org::omg::CosNaming::NameComponent>> p1, jni::ref<org::omg::CORBA::Object> p2) { return call_method<"rebind", void>(p1, p2); }
	void rebind_context(jni::ref<jni::array<org::omg::CosNaming::NameComponent>> p1, jni::ref<org::omg::CosNaming::NamingContext> p2) { return call_method<"rebind_context", void>(p1, p2); }
	jni::ref<org::omg::CORBA::Object> resolve(jni::ref<jni::array<org::omg::CosNaming::NameComponent>> p1) { return call_method<"resolve", jni::ref<org::omg::CORBA::Object>>(p1); }
	void unbind(jni::ref<jni::array<org::omg::CosNaming::NameComponent>> p1) { return call_method<"unbind", void>(p1); }
	void list(jint p1, jni::ref<org::omg::CosNaming::BindingListHolder> p2, jni::ref<org::omg::CosNaming::BindingIteratorHolder> p3) { return call_method<"list", void>(p1, p2, p3); }
	jni::ref<org::omg::CosNaming::NamingContext> new_context() { return call_method<"new_context", jni::ref<org::omg::CosNaming::NamingContext>>(); }
	jni::ref<org::omg::CosNaming::NamingContext> bind_new_context(jni::ref<jni::array<org::omg::CosNaming::NameComponent>> p1) { return call_method<"bind_new_context", jni::ref<org::omg::CosNaming::NamingContext>>(p1); }
	void destroy() { return call_method<"destroy", void>(); }
	jni::ref<jni::array<java::lang::String>> _ids() { return call_method<"_ids", jni::ref<jni::array<java::lang::String>>>(); }

protected:

	_NamingContextStub(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_OMG_COSNAMING__NAMINGCONTEXTSTUB

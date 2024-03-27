// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/org/omg/CORBA/LocalObject.h>
#include <scapix/java_api/org/omg/PortableInterceptor/ORBInitializer.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ORB_PARSERTABLE_TESTORBINITIALIZER2_FWD
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ORB_PARSERTABLE_TESTORBINITIALIZER2_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::corba::se::impl::orb { class ParserTable_TestORBInitializer2; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::corba::se::impl::orb::ParserTable_TestORBInitializer2>
{
	static constexpr fixed_string class_name = "com/sun/corba/se/impl/orb/ParserTable$TestORBInitializer2";
	using base_classes = std::tuple<scapix::java_api::org::omg::CORBA::LocalObject, scapix::java_api::org::omg::PortableInterceptor::ORBInitializer>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ORB_PARSERTABLE_TESTORBINITIALIZER2_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ORB_PARSERTABLE_TESTORBINITIALIZER2)
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ORB_PARSERTABLE_TESTORBINITIALIZER2

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/org/omg/PortableInterceptor/ORBInitInfo.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::corba::se::impl::orb::ParserTable_TestORBInitializer2 : public jni::object_base<"com/sun/corba/se/impl/orb/ParserTable$TestORBInitializer2",
	org::omg::CORBA::LocalObject,
	org::omg::PortableInterceptor::ORBInitializer>
{
public:

	static jni::ref<com::sun::corba::se::impl::orb::ParserTable_TestORBInitializer2> new_object() { return base_::new_object(); }
	jboolean equals(jni::ref<java::lang::Object> p1) { return call_method<"equals", jboolean>(p1); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	void pre_init(jni::ref<org::omg::PortableInterceptor::ORBInitInfo> p1) { return call_method<"pre_init", void>(p1); }
	void post_init(jni::ref<org::omg::PortableInterceptor::ORBInitInfo> p1) { return call_method<"post_init", void>(p1); }

protected:

	ParserTable_TestORBInitializer2(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ORB_PARSERTABLE_TESTORBINITIALIZER2

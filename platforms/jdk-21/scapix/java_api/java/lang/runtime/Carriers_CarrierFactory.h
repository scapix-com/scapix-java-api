// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_RUNTIME_CARRIERS_CARRIERFACTORY_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_RUNTIME_CARRIERS_CARRIERFACTORY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang::runtime { class Carriers_CarrierFactory; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::runtime::Carriers_CarrierFactory>
{
	static constexpr fixed_string class_name = "java/lang/runtime/Carriers$CarrierFactory";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_RUNTIME_CARRIERS_CARRIERFACTORY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_RUNTIME_CARRIERS_CARRIERFACTORY)
#define SCAPIX_JAVA_API_JAVA_LANG_RUNTIME_CARRIERS_CARRIERFACTORY

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::lang::runtime::Carriers_CarrierFactory : public jni::object_base<"java/lang/runtime/Carriers$CarrierFactory",
	java::lang::Object>
{
public:


protected:

	Carriers_CarrierFactory(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_RUNTIME_CARRIERS_CARRIERFACTORY
// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_NIO_CS_IBM737_HOLDER_FWD
#define SCAPIX_JAVA_API_SUN_NIO_CS_IBM737_HOLDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::nio::cs { class IBM737_Holder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::nio::cs::IBM737_Holder>
{
	static constexpr fixed_string class_name = "sun/nio/cs/IBM737$Holder";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NIO_CS_IBM737_HOLDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_NIO_CS_IBM737_HOLDER)
#define SCAPIX_JAVA_API_SUN_NIO_CS_IBM737_HOLDER

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::nio::cs::IBM737_Holder : public jni::object_base<"sun/nio/cs/IBM737$Holder",
	java::lang::Object>
{
public:


protected:

	IBM737_Holder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NIO_CS_IBM737_HOLDER

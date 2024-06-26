// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_AWT_MOSTRECENTKEYVALUE_FWD
#define SCAPIX_JAVA_API_SUN_AWT_MOSTRECENTKEYVALUE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::awt { class MostRecentKeyValue; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::awt::MostRecentKeyValue>
{
	static constexpr fixed_string class_name = "sun/awt/MostRecentKeyValue";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_AWT_MOSTRECENTKEYVALUE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_AWT_MOSTRECENTKEYVALUE)
#define SCAPIX_JAVA_API_SUN_AWT_MOSTRECENTKEYVALUE

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::awt::MostRecentKeyValue : public jni::object_base<"sun/awt/MostRecentKeyValue",
	java::lang::Object>
{
public:


protected:

	MostRecentKeyValue(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_AWT_MOSTRECENTKEYVALUE

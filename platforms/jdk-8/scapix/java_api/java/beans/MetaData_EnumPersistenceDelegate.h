// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/beans/PersistenceDelegate.h>

#ifndef SCAPIX_JAVA_API_JAVA_BEANS_METADATA_ENUMPERSISTENCEDELEGATE_FWD
#define SCAPIX_JAVA_API_JAVA_BEANS_METADATA_ENUMPERSISTENCEDELEGATE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::beans { class MetaData_EnumPersistenceDelegate; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::beans::MetaData_EnumPersistenceDelegate>
{
	static constexpr fixed_string class_name = "java/beans/MetaData$EnumPersistenceDelegate";
	using base_classes = std::tuple<scapix::java_api::java::beans::PersistenceDelegate>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_BEANS_METADATA_ENUMPERSISTENCEDELEGATE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_BEANS_METADATA_ENUMPERSISTENCEDELEGATE)
#define SCAPIX_JAVA_API_JAVA_BEANS_METADATA_ENUMPERSISTENCEDELEGATE

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::beans::MetaData_EnumPersistenceDelegate : public jni::object_base<"java/beans/MetaData$EnumPersistenceDelegate",
	java::beans::PersistenceDelegate>
{
public:


protected:

	MetaData_EnumPersistenceDelegate(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_BEANS_METADATA_ENUMPERSISTENCEDELEGATE

// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/beans/DefaultPersistenceDelegate.h>

#ifndef SCAPIX_JAVA_API_JAVA_BEANS_METADATA_JAVA_AWT_CHOICE_PERSISTENCEDELEGATE_FWD
#define SCAPIX_JAVA_API_JAVA_BEANS_METADATA_JAVA_AWT_CHOICE_PERSISTENCEDELEGATE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::beans { class MetaData_java_awt_Choice_PersistenceDelegate; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::beans::MetaData_java_awt_Choice_PersistenceDelegate>
{
	static constexpr fixed_string class_name = "java/beans/MetaData$java_awt_Choice_PersistenceDelegate";
	using base_classes = std::tuple<scapix::java_api::java::beans::DefaultPersistenceDelegate>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_BEANS_METADATA_JAVA_AWT_CHOICE_PERSISTENCEDELEGATE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_BEANS_METADATA_JAVA_AWT_CHOICE_PERSISTENCEDELEGATE)
#define SCAPIX_JAVA_API_JAVA_BEANS_METADATA_JAVA_AWT_CHOICE_PERSISTENCEDELEGATE

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::beans::MetaData_java_awt_Choice_PersistenceDelegate : public jni::object_base<"java/beans/MetaData$java_awt_Choice_PersistenceDelegate",
	java::beans::DefaultPersistenceDelegate>
{
public:


protected:

	MetaData_java_awt_Choice_PersistenceDelegate(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_BEANS_METADATA_JAVA_AWT_CHOICE_PERSISTENCEDELEGATE

// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/database/Observable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_DATABASE_DATASETOBSERVABLE_FWD
#define SCAPIX_JAVA_API_ANDROID_DATABASE_DATASETOBSERVABLE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::database { class DataSetObservable; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::database::DataSetObservable>
{
	static constexpr fixed_string class_name = "android/database/DataSetObservable";
	using base_classes = std::tuple<scapix::java_api::android::database::Observable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_DATABASE_DATASETOBSERVABLE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_DATABASE_DATASETOBSERVABLE)
#define SCAPIX_JAVA_API_ANDROID_DATABASE_DATASETOBSERVABLE

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::database::DataSetObservable : public jni::object_base<"android/database/DataSetObservable",
	android::database::Observable>
{
public:

	static jni::ref<android::database::DataSetObservable> new_object() { return base_::new_object(); }
	void notifyChanged() { return call_method<"notifyChanged", void>(); }
	void notifyInvalidated() { return call_method<"notifyInvalidated", void>(); }

protected:

	DataSetObservable(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_DATABASE_DATASETOBSERVABLE

/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkOverlappingAMRAlgorithmWrap.h"
#include "vtkAMRSliceFilterWrap.h"
#include "vtkObjectWrap.h"
#include "vtkMultiProcessControllerWrap.h"
#include "vtkInformationWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkAMRSliceFilterWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkAMRSliceFilterWrap::ptpl;

VtkAMRSliceFilterWrap::VtkAMRSliceFilterWrap()
{ }

VtkAMRSliceFilterWrap::VtkAMRSliceFilterWrap(vtkSmartPointer<vtkAMRSliceFilter> _native)
{ native = _native; }

VtkAMRSliceFilterWrap::~VtkAMRSliceFilterWrap()
{ }

void VtkAMRSliceFilterWrap::Init(v8::Local<v8::Object> exports)
{
	if (!constructor.IsEmpty()) return;
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkOverlappingAMRAlgorithmWrap::Init( exports );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkOverlappingAMRAlgorithmWrap::ptpl));

	tpl->SetClassName(Nan::New("VtkAMRSliceFilterWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );

	exports->Set(Nan::New("vtkAMRSliceFilter").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("AMRSliceFilter").ToLocalChecked(),tpl->GetFunction());
}

void VtkAMRSliceFilterWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "EnablePrefetchingOff", EnablePrefetchingOff);
	Nan::SetPrototypeMethod(tpl, "enablePrefetchingOff", EnablePrefetchingOff);

	Nan::SetPrototypeMethod(tpl, "EnablePrefetchingOn", EnablePrefetchingOn);
	Nan::SetPrototypeMethod(tpl, "enablePrefetchingOn", EnablePrefetchingOn);

	Nan::SetPrototypeMethod(tpl, "FillInputPortInformation", FillInputPortInformation);
	Nan::SetPrototypeMethod(tpl, "fillInputPortInformation", FillInputPortInformation);

	Nan::SetPrototypeMethod(tpl, "FillOutputPortInformation", FillOutputPortInformation);
	Nan::SetPrototypeMethod(tpl, "fillOutputPortInformation", FillOutputPortInformation);

	Nan::SetPrototypeMethod(tpl, "ForwardUpstreamOff", ForwardUpstreamOff);
	Nan::SetPrototypeMethod(tpl, "forwardUpstreamOff", ForwardUpstreamOff);

	Nan::SetPrototypeMethod(tpl, "ForwardUpstreamOn", ForwardUpstreamOn);
	Nan::SetPrototypeMethod(tpl, "forwardUpstreamOn", ForwardUpstreamOn);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetController", GetController);
	Nan::SetPrototypeMethod(tpl, "getController", GetController);

	Nan::SetPrototypeMethod(tpl, "GetEnablePrefetching", GetEnablePrefetching);
	Nan::SetPrototypeMethod(tpl, "getEnablePrefetching", GetEnablePrefetching);

	Nan::SetPrototypeMethod(tpl, "GetForwardUpstream", GetForwardUpstream);
	Nan::SetPrototypeMethod(tpl, "getForwardUpstream", GetForwardUpstream);

	Nan::SetPrototypeMethod(tpl, "GetMaxResolution", GetMaxResolution);
	Nan::SetPrototypeMethod(tpl, "getMaxResolution", GetMaxResolution);

	Nan::SetPrototypeMethod(tpl, "GetNormal", GetNormal);
	Nan::SetPrototypeMethod(tpl, "getNormal", GetNormal);

	Nan::SetPrototypeMethod(tpl, "GetOffSetFromOrigin", GetOffSetFromOrigin);
	Nan::SetPrototypeMethod(tpl, "getOffSetFromOrigin", GetOffSetFromOrigin);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetController", SetController);
	Nan::SetPrototypeMethod(tpl, "setController", SetController);

	Nan::SetPrototypeMethod(tpl, "SetEnablePrefetching", SetEnablePrefetching);
	Nan::SetPrototypeMethod(tpl, "setEnablePrefetching", SetEnablePrefetching);

	Nan::SetPrototypeMethod(tpl, "SetForwardUpstream", SetForwardUpstream);
	Nan::SetPrototypeMethod(tpl, "setForwardUpstream", SetForwardUpstream);

	Nan::SetPrototypeMethod(tpl, "SetMaxResolution", SetMaxResolution);
	Nan::SetPrototypeMethod(tpl, "setMaxResolution", SetMaxResolution);

	Nan::SetPrototypeMethod(tpl, "SetNormal", SetNormal);
	Nan::SetPrototypeMethod(tpl, "setNormal", SetNormal);

	Nan::SetPrototypeMethod(tpl, "SetOffSetFromOrigin", SetOffSetFromOrigin);
	Nan::SetPrototypeMethod(tpl, "setOffSetFromOrigin", SetOffSetFromOrigin);

}

void VtkAMRSliceFilterWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkAMRSliceFilter> native = vtkSmartPointer<vtkAMRSliceFilter>::New();
		VtkAMRSliceFilterWrap* obj = new VtkAMRSliceFilterWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkAMRSliceFilterWrap::EnablePrefetchingOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRSliceFilterWrap *wrapper = ObjectWrap::Unwrap<VtkAMRSliceFilterWrap>(info.Holder());
	vtkAMRSliceFilter *native = (vtkAMRSliceFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->EnablePrefetchingOff();
}

void VtkAMRSliceFilterWrap::EnablePrefetchingOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRSliceFilterWrap *wrapper = ObjectWrap::Unwrap<VtkAMRSliceFilterWrap>(info.Holder());
	vtkAMRSliceFilter *native = (vtkAMRSliceFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->EnablePrefetchingOn();
}

void VtkAMRSliceFilterWrap::FillInputPortInformation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRSliceFilterWrap *wrapper = ObjectWrap::Unwrap<VtkAMRSliceFilterWrap>(info.Holder());
	vtkAMRSliceFilter *native = (vtkAMRSliceFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsObject())
		{
			VtkInformationWrap *a1 = ObjectWrap::Unwrap<VtkInformationWrap>(info[1]->ToObject());
			int r;
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			r = native->FillInputPortInformation(
				info[0]->Int32Value(),
				(vtkInformation *) a1->native.GetPointer()
			);
			info.GetReturnValue().Set(Nan::New(r));
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAMRSliceFilterWrap::FillOutputPortInformation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRSliceFilterWrap *wrapper = ObjectWrap::Unwrap<VtkAMRSliceFilterWrap>(info.Holder());
	vtkAMRSliceFilter *native = (vtkAMRSliceFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsObject())
		{
			VtkInformationWrap *a1 = ObjectWrap::Unwrap<VtkInformationWrap>(info[1]->ToObject());
			int r;
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			r = native->FillOutputPortInformation(
				info[0]->Int32Value(),
				(vtkInformation *) a1->native.GetPointer()
			);
			info.GetReturnValue().Set(Nan::New(r));
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAMRSliceFilterWrap::ForwardUpstreamOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRSliceFilterWrap *wrapper = ObjectWrap::Unwrap<VtkAMRSliceFilterWrap>(info.Holder());
	vtkAMRSliceFilter *native = (vtkAMRSliceFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ForwardUpstreamOff();
}

void VtkAMRSliceFilterWrap::ForwardUpstreamOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRSliceFilterWrap *wrapper = ObjectWrap::Unwrap<VtkAMRSliceFilterWrap>(info.Holder());
	vtkAMRSliceFilter *native = (vtkAMRSliceFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ForwardUpstreamOn();
}

void VtkAMRSliceFilterWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRSliceFilterWrap *wrapper = ObjectWrap::Unwrap<VtkAMRSliceFilterWrap>(info.Holder());
	vtkAMRSliceFilter *native = (vtkAMRSliceFilter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkAMRSliceFilterWrap::GetController(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRSliceFilterWrap *wrapper = ObjectWrap::Unwrap<VtkAMRSliceFilterWrap>(info.Holder());
	vtkAMRSliceFilter *native = (vtkAMRSliceFilter *)wrapper->native.GetPointer();
	vtkMultiProcessController * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetController();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkMultiProcessControllerWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkMultiProcessControllerWrap *w = new VtkMultiProcessControllerWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkAMRSliceFilterWrap::GetEnablePrefetching(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRSliceFilterWrap *wrapper = ObjectWrap::Unwrap<VtkAMRSliceFilterWrap>(info.Holder());
	vtkAMRSliceFilter *native = (vtkAMRSliceFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetEnablePrefetching();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAMRSliceFilterWrap::GetForwardUpstream(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRSliceFilterWrap *wrapper = ObjectWrap::Unwrap<VtkAMRSliceFilterWrap>(info.Holder());
	vtkAMRSliceFilter *native = (vtkAMRSliceFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetForwardUpstream();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAMRSliceFilterWrap::GetMaxResolution(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRSliceFilterWrap *wrapper = ObjectWrap::Unwrap<VtkAMRSliceFilterWrap>(info.Holder());
	vtkAMRSliceFilter *native = (vtkAMRSliceFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMaxResolution();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAMRSliceFilterWrap::GetNormal(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRSliceFilterWrap *wrapper = ObjectWrap::Unwrap<VtkAMRSliceFilterWrap>(info.Holder());
	vtkAMRSliceFilter *native = (vtkAMRSliceFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNormal();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAMRSliceFilterWrap::GetOffSetFromOrigin(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRSliceFilterWrap *wrapper = ObjectWrap::Unwrap<VtkAMRSliceFilterWrap>(info.Holder());
	vtkAMRSliceFilter *native = (vtkAMRSliceFilter *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOffSetFromOrigin();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAMRSliceFilterWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRSliceFilterWrap *wrapper = ObjectWrap::Unwrap<VtkAMRSliceFilterWrap>(info.Holder());
	vtkAMRSliceFilter *native = (vtkAMRSliceFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		Nan::Utf8String a0(info[0]);
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->IsA(
			*a0
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAMRSliceFilterWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRSliceFilterWrap *wrapper = ObjectWrap::Unwrap<VtkAMRSliceFilterWrap>(info.Holder());
	vtkAMRSliceFilter *native = (vtkAMRSliceFilter *)wrapper->native.GetPointer();
	vtkAMRSliceFilter * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkAMRSliceFilterWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkAMRSliceFilterWrap *w = new VtkAMRSliceFilterWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkAMRSliceFilterWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRSliceFilterWrap *wrapper = ObjectWrap::Unwrap<VtkAMRSliceFilterWrap>(info.Holder());
	vtkAMRSliceFilter *native = (vtkAMRSliceFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkAMRSliceFilter * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkAMRSliceFilterWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkAMRSliceFilterWrap *w = new VtkAMRSliceFilterWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAMRSliceFilterWrap::SetController(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRSliceFilterWrap *wrapper = ObjectWrap::Unwrap<VtkAMRSliceFilterWrap>(info.Holder());
	vtkAMRSliceFilter *native = (vtkAMRSliceFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkMultiProcessControllerWrap *a0 = ObjectWrap::Unwrap<VtkMultiProcessControllerWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetController(
			(vtkMultiProcessController *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAMRSliceFilterWrap::SetEnablePrefetching(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRSliceFilterWrap *wrapper = ObjectWrap::Unwrap<VtkAMRSliceFilterWrap>(info.Holder());
	vtkAMRSliceFilter *native = (vtkAMRSliceFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetEnablePrefetching(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAMRSliceFilterWrap::SetForwardUpstream(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRSliceFilterWrap *wrapper = ObjectWrap::Unwrap<VtkAMRSliceFilterWrap>(info.Holder());
	vtkAMRSliceFilter *native = (vtkAMRSliceFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetForwardUpstream(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAMRSliceFilterWrap::SetMaxResolution(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRSliceFilterWrap *wrapper = ObjectWrap::Unwrap<VtkAMRSliceFilterWrap>(info.Holder());
	vtkAMRSliceFilter *native = (vtkAMRSliceFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetMaxResolution(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAMRSliceFilterWrap::SetNormal(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRSliceFilterWrap *wrapper = ObjectWrap::Unwrap<VtkAMRSliceFilterWrap>(info.Holder());
	vtkAMRSliceFilter *native = (vtkAMRSliceFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetNormal(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAMRSliceFilterWrap::SetOffSetFromOrigin(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRSliceFilterWrap *wrapper = ObjectWrap::Unwrap<VtkAMRSliceFilterWrap>(info.Holder());
	vtkAMRSliceFilter *native = (vtkAMRSliceFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetOffSetFromOrigin(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}


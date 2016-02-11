/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkVolumeMapperWrap.h"
#include "vtkSmartVolumeMapperWrap.h"
#include "vtkObjectWrap.h"
#include "vtkRendererWrap.h"
#include "vtkVolumeWrap.h"
#include "vtkImageDataWrap.h"
#include "vtkWindowWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkSmartVolumeMapperWrap::ptpl;

VtkSmartVolumeMapperWrap::VtkSmartVolumeMapperWrap()
{ }

VtkSmartVolumeMapperWrap::VtkSmartVolumeMapperWrap(vtkSmartPointer<vtkSmartVolumeMapper> _native)
{ native = _native; }

VtkSmartVolumeMapperWrap::~VtkSmartVolumeMapperWrap()
{ }

void VtkSmartVolumeMapperWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkSmartVolumeMapper").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("SmartVolumeMapper").ToLocalChecked(), ConstructorGetter);
}

void VtkSmartVolumeMapperWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkSmartVolumeMapperWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkVolumeMapperWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkVolumeMapperWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkSmartVolumeMapperWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "CreateCanonicalView", CreateCanonicalView);
	Nan::SetPrototypeMethod(tpl, "createCanonicalView", CreateCanonicalView);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetInteractiveUpdateRate", GetInteractiveUpdateRate);
	Nan::SetPrototypeMethod(tpl, "getInteractiveUpdateRate", GetInteractiveUpdateRate);

	Nan::SetPrototypeMethod(tpl, "GetInteractiveUpdateRateMaxValue", GetInteractiveUpdateRateMaxValue);
	Nan::SetPrototypeMethod(tpl, "getInteractiveUpdateRateMaxValue", GetInteractiveUpdateRateMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetInteractiveUpdateRateMinValue", GetInteractiveUpdateRateMinValue);
	Nan::SetPrototypeMethod(tpl, "getInteractiveUpdateRateMinValue", GetInteractiveUpdateRateMinValue);

	Nan::SetPrototypeMethod(tpl, "GetInterpolationMode", GetInterpolationMode);
	Nan::SetPrototypeMethod(tpl, "getInterpolationMode", GetInterpolationMode);

	Nan::SetPrototypeMethod(tpl, "GetInterpolationModeMaxValue", GetInterpolationModeMaxValue);
	Nan::SetPrototypeMethod(tpl, "getInterpolationModeMaxValue", GetInterpolationModeMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetInterpolationModeMinValue", GetInterpolationModeMinValue);
	Nan::SetPrototypeMethod(tpl, "getInterpolationModeMinValue", GetInterpolationModeMinValue);

	Nan::SetPrototypeMethod(tpl, "GetLastUsedRenderMode", GetLastUsedRenderMode);
	Nan::SetPrototypeMethod(tpl, "getLastUsedRenderMode", GetLastUsedRenderMode);

	Nan::SetPrototypeMethod(tpl, "GetRequestedRenderMode", GetRequestedRenderMode);
	Nan::SetPrototypeMethod(tpl, "getRequestedRenderMode", GetRequestedRenderMode);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "ReleaseGraphicsResources", ReleaseGraphicsResources);
	Nan::SetPrototypeMethod(tpl, "releaseGraphicsResources", ReleaseGraphicsResources);

	Nan::SetPrototypeMethod(tpl, "Render", Render);
	Nan::SetPrototypeMethod(tpl, "render", Render);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetInteractiveUpdateRate", SetInteractiveUpdateRate);
	Nan::SetPrototypeMethod(tpl, "setInteractiveUpdateRate", SetInteractiveUpdateRate);

	Nan::SetPrototypeMethod(tpl, "SetInterpolationMode", SetInterpolationMode);
	Nan::SetPrototypeMethod(tpl, "setInterpolationMode", SetInterpolationMode);

	Nan::SetPrototypeMethod(tpl, "SetInterpolationModeToCubic", SetInterpolationModeToCubic);
	Nan::SetPrototypeMethod(tpl, "setInterpolationModeToCubic", SetInterpolationModeToCubic);

	Nan::SetPrototypeMethod(tpl, "SetInterpolationModeToLinear", SetInterpolationModeToLinear);
	Nan::SetPrototypeMethod(tpl, "setInterpolationModeToLinear", SetInterpolationModeToLinear);

	Nan::SetPrototypeMethod(tpl, "SetInterpolationModeToNearestNeighbor", SetInterpolationModeToNearestNeighbor);
	Nan::SetPrototypeMethod(tpl, "setInterpolationModeToNearestNeighbor", SetInterpolationModeToNearestNeighbor);

	Nan::SetPrototypeMethod(tpl, "SetRequestedRenderMode", SetRequestedRenderMode);
	Nan::SetPrototypeMethod(tpl, "setRequestedRenderMode", SetRequestedRenderMode);

	Nan::SetPrototypeMethod(tpl, "SetRequestedRenderModeToDefault", SetRequestedRenderModeToDefault);
	Nan::SetPrototypeMethod(tpl, "setRequestedRenderModeToDefault", SetRequestedRenderModeToDefault);

	Nan::SetPrototypeMethod(tpl, "SetRequestedRenderModeToRayCast", SetRequestedRenderModeToRayCast);
	Nan::SetPrototypeMethod(tpl, "setRequestedRenderModeToRayCast", SetRequestedRenderModeToRayCast);

	Nan::SetPrototypeMethod(tpl, "SetRequestedRenderModeToRayCastAndTexture", SetRequestedRenderModeToRayCastAndTexture);
	Nan::SetPrototypeMethod(tpl, "setRequestedRenderModeToRayCastAndTexture", SetRequestedRenderModeToRayCastAndTexture);

	ptpl.Reset( tpl );
}

void VtkSmartVolumeMapperWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkSmartVolumeMapper> native = vtkSmartPointer<vtkSmartVolumeMapper>::New();
		VtkSmartVolumeMapperWrap* obj = new VtkSmartVolumeMapperWrap(native);
		obj->Wrap(info.This());
	}
	else
	{
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
		{
			Nan::ThrowError("Parameter Error");
			return;
		}
	}

	info.GetReturnValue().Set(info.This());
}

void VtkSmartVolumeMapperWrap::CreateCanonicalView(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSmartVolumeMapperWrap *wrapper = ObjectWrap::Unwrap<VtkSmartVolumeMapperWrap>(info.Holder());
	vtkSmartVolumeMapper *native = (vtkSmartVolumeMapper *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkRendererWrap::ptpl))->HasInstance(info[0]))
	{
		VtkRendererWrap *a0 = ObjectWrap::Unwrap<VtkRendererWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkVolumeWrap::ptpl))->HasInstance(info[1]))
		{
			VtkVolumeWrap *a1 = ObjectWrap::Unwrap<VtkVolumeWrap>(info[1]->ToObject());
			if(info.Length() > 2 && info[2]->IsObject() && (Nan::New(VtkVolumeWrap::ptpl))->HasInstance(info[2]))
			{
				VtkVolumeWrap *a2 = ObjectWrap::Unwrap<VtkVolumeWrap>(info[2]->ToObject());
				if(info.Length() > 3 && info[3]->IsObject() && (Nan::New(VtkImageDataWrap::ptpl))->HasInstance(info[3]))
				{
					VtkImageDataWrap *a3 = ObjectWrap::Unwrap<VtkImageDataWrap>(info[3]->ToObject());
					if(info.Length() > 4 && info[4]->IsInt32())
					{
						if(info.Length() > 5 && info[5]->IsFloat64Array())
						{
							v8::Local<v8::Float64Array>a5(v8::Local<v8::Float64Array>::Cast(info[5]->ToObject()));
							if( a5->Length() < 3 )
							{
								Nan::ThrowError("Array too short.");
								return;
							}

							if(info.Length() > 6 && info[6]->IsFloat64Array())
							{
								v8::Local<v8::Float64Array>a6(v8::Local<v8::Float64Array>::Cast(info[6]->ToObject()));
								if( a6->Length() < 3 )
								{
									Nan::ThrowError("Array too short.");
									return;
								}

																if(info.Length() != 7)
								{
									Nan::ThrowError("Too many parameters.");
									return;
								}
								native->CreateCanonicalView(
									(vtkRenderer *) a0->native.GetPointer(),
									(vtkVolume *) a1->native.GetPointer(),
									(vtkVolume *) a2->native.GetPointer(),
									(vtkImageData *) a3->native.GetPointer(),
									info[4]->Int32Value(),
									(double *)(a5->Buffer()->GetContents().Data()),
									(double *)(a6->Buffer()->GetContents().Data())
								);
								return;
							}
							else if(info.Length() > 6 && info[6]->IsArray())
							{
								v8::Local<v8::Array>a6(v8::Local<v8::Array>::Cast(info[6]->ToObject()));
								double b6[3];
								if( a6->Length() < 3 )
								{
									Nan::ThrowError("Array too short.");
									return;
								}

								for( i = 0; i < 3; i++ )
								{
									if( !a6->Get(i)->IsNumber() )
									{
										Nan::ThrowError("Array contents invalid.");
										return;
									}
									b6[i] = a6->Get(i)->NumberValue();
								}
																if(info.Length() != 7)
								{
									Nan::ThrowError("Too many parameters.");
									return;
								}
								native->CreateCanonicalView(
									(vtkRenderer *) a0->native.GetPointer(),
									(vtkVolume *) a1->native.GetPointer(),
									(vtkVolume *) a2->native.GetPointer(),
									(vtkImageData *) a3->native.GetPointer(),
									info[4]->Int32Value(),
									(double *)(a5->Buffer()->GetContents().Data()),
									b6
								);
								return;
							}
						}
						else if(info.Length() > 5 && info[5]->IsArray())
						{
							v8::Local<v8::Array>a5(v8::Local<v8::Array>::Cast(info[5]->ToObject()));
							double b5[3];
							if( a5->Length() < 3 )
							{
								Nan::ThrowError("Array too short.");
								return;
							}

							for( i = 0; i < 3; i++ )
							{
								if( !a5->Get(i)->IsNumber() )
								{
									Nan::ThrowError("Array contents invalid.");
									return;
								}
								b5[i] = a5->Get(i)->NumberValue();
							}
							if(info.Length() > 6 && info[6]->IsArray())
							{
								v8::Local<v8::Array>a6(v8::Local<v8::Array>::Cast(info[6]->ToObject()));
								double b6[3];
								if( a6->Length() < 3 )
								{
									Nan::ThrowError("Array too short.");
									return;
								}

								for( i = 0; i < 3; i++ )
								{
									if( !a6->Get(i)->IsNumber() )
									{
										Nan::ThrowError("Array contents invalid.");
										return;
									}
									b6[i] = a6->Get(i)->NumberValue();
								}
																if(info.Length() != 7)
								{
									Nan::ThrowError("Too many parameters.");
									return;
								}
								native->CreateCanonicalView(
									(vtkRenderer *) a0->native.GetPointer(),
									(vtkVolume *) a1->native.GetPointer(),
									(vtkVolume *) a2->native.GetPointer(),
									(vtkImageData *) a3->native.GetPointer(),
									info[4]->Int32Value(),
									b5,
									b6
								);
								return;
							}
							else if(info.Length() > 6 && info[6]->IsFloat64Array())
							{
								v8::Local<v8::Float64Array>a6(v8::Local<v8::Float64Array>::Cast(info[6]->ToObject()));
								if( a6->Length() < 3 )
								{
									Nan::ThrowError("Array too short.");
									return;
								}

																if(info.Length() != 7)
								{
									Nan::ThrowError("Too many parameters.");
									return;
								}
								native->CreateCanonicalView(
									(vtkRenderer *) a0->native.GetPointer(),
									(vtkVolume *) a1->native.GetPointer(),
									(vtkVolume *) a2->native.GetPointer(),
									(vtkImageData *) a3->native.GetPointer(),
									info[4]->Int32Value(),
									b5,
									(double *)(a6->Buffer()->GetContents().Data())
								);
								return;
							}
						}
					}
				}
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSmartVolumeMapperWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSmartVolumeMapperWrap *wrapper = ObjectWrap::Unwrap<VtkSmartVolumeMapperWrap>(info.Holder());
	vtkSmartVolumeMapper *native = (vtkSmartVolumeMapper *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkSmartVolumeMapperWrap::GetInteractiveUpdateRate(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSmartVolumeMapperWrap *wrapper = ObjectWrap::Unwrap<VtkSmartVolumeMapperWrap>(info.Holder());
	vtkSmartVolumeMapper *native = (vtkSmartVolumeMapper *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetInteractiveUpdateRate();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSmartVolumeMapperWrap::GetInteractiveUpdateRateMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSmartVolumeMapperWrap *wrapper = ObjectWrap::Unwrap<VtkSmartVolumeMapperWrap>(info.Holder());
	vtkSmartVolumeMapper *native = (vtkSmartVolumeMapper *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetInteractiveUpdateRateMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSmartVolumeMapperWrap::GetInteractiveUpdateRateMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSmartVolumeMapperWrap *wrapper = ObjectWrap::Unwrap<VtkSmartVolumeMapperWrap>(info.Holder());
	vtkSmartVolumeMapper *native = (vtkSmartVolumeMapper *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetInteractiveUpdateRateMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSmartVolumeMapperWrap::GetInterpolationMode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSmartVolumeMapperWrap *wrapper = ObjectWrap::Unwrap<VtkSmartVolumeMapperWrap>(info.Holder());
	vtkSmartVolumeMapper *native = (vtkSmartVolumeMapper *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetInterpolationMode();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSmartVolumeMapperWrap::GetInterpolationModeMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSmartVolumeMapperWrap *wrapper = ObjectWrap::Unwrap<VtkSmartVolumeMapperWrap>(info.Holder());
	vtkSmartVolumeMapper *native = (vtkSmartVolumeMapper *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetInterpolationModeMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSmartVolumeMapperWrap::GetInterpolationModeMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSmartVolumeMapperWrap *wrapper = ObjectWrap::Unwrap<VtkSmartVolumeMapperWrap>(info.Holder());
	vtkSmartVolumeMapper *native = (vtkSmartVolumeMapper *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetInterpolationModeMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSmartVolumeMapperWrap::GetLastUsedRenderMode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSmartVolumeMapperWrap *wrapper = ObjectWrap::Unwrap<VtkSmartVolumeMapperWrap>(info.Holder());
	vtkSmartVolumeMapper *native = (vtkSmartVolumeMapper *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLastUsedRenderMode();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSmartVolumeMapperWrap::GetRequestedRenderMode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSmartVolumeMapperWrap *wrapper = ObjectWrap::Unwrap<VtkSmartVolumeMapperWrap>(info.Holder());
	vtkSmartVolumeMapper *native = (vtkSmartVolumeMapper *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRequestedRenderMode();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSmartVolumeMapperWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSmartVolumeMapperWrap *wrapper = ObjectWrap::Unwrap<VtkSmartVolumeMapperWrap>(info.Holder());
	vtkSmartVolumeMapper *native = (vtkSmartVolumeMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
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

void VtkSmartVolumeMapperWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSmartVolumeMapperWrap *wrapper = ObjectWrap::Unwrap<VtkSmartVolumeMapperWrap>(info.Holder());
	vtkSmartVolumeMapper *native = (vtkSmartVolumeMapper *)wrapper->native.GetPointer();
	vtkSmartVolumeMapper * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkSmartVolumeMapperWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkSmartVolumeMapperWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkSmartVolumeMapperWrap *w = new VtkSmartVolumeMapperWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkSmartVolumeMapperWrap::ReleaseGraphicsResources(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSmartVolumeMapperWrap *wrapper = ObjectWrap::Unwrap<VtkSmartVolumeMapperWrap>(info.Holder());
	vtkSmartVolumeMapper *native = (vtkSmartVolumeMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkWindowWrap::ptpl))->HasInstance(info[0]))
	{
		VtkWindowWrap *a0 = ObjectWrap::Unwrap<VtkWindowWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->ReleaseGraphicsResources(
			(vtkWindow *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSmartVolumeMapperWrap::Render(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSmartVolumeMapperWrap *wrapper = ObjectWrap::Unwrap<VtkSmartVolumeMapperWrap>(info.Holder());
	vtkSmartVolumeMapper *native = (vtkSmartVolumeMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkRendererWrap::ptpl))->HasInstance(info[0]))
	{
		VtkRendererWrap *a0 = ObjectWrap::Unwrap<VtkRendererWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkVolumeWrap::ptpl))->HasInstance(info[1]))
		{
			VtkVolumeWrap *a1 = ObjectWrap::Unwrap<VtkVolumeWrap>(info[1]->ToObject());
						if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->Render(
				(vtkRenderer *) a0->native.GetPointer(),
				(vtkVolume *) a1->native.GetPointer()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSmartVolumeMapperWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSmartVolumeMapperWrap *wrapper = ObjectWrap::Unwrap<VtkSmartVolumeMapperWrap>(info.Holder());
	vtkSmartVolumeMapper *native = (vtkSmartVolumeMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkSmartVolumeMapper * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkSmartVolumeMapperWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkSmartVolumeMapperWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkSmartVolumeMapperWrap *w = new VtkSmartVolumeMapperWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSmartVolumeMapperWrap::SetInteractiveUpdateRate(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSmartVolumeMapperWrap *wrapper = ObjectWrap::Unwrap<VtkSmartVolumeMapperWrap>(info.Holder());
	vtkSmartVolumeMapper *native = (vtkSmartVolumeMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetInteractiveUpdateRate(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSmartVolumeMapperWrap::SetInterpolationMode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSmartVolumeMapperWrap *wrapper = ObjectWrap::Unwrap<VtkSmartVolumeMapperWrap>(info.Holder());
	vtkSmartVolumeMapper *native = (vtkSmartVolumeMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetInterpolationMode(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSmartVolumeMapperWrap::SetInterpolationModeToCubic(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSmartVolumeMapperWrap *wrapper = ObjectWrap::Unwrap<VtkSmartVolumeMapperWrap>(info.Holder());
	vtkSmartVolumeMapper *native = (vtkSmartVolumeMapper *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetInterpolationModeToCubic();
}

void VtkSmartVolumeMapperWrap::SetInterpolationModeToLinear(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSmartVolumeMapperWrap *wrapper = ObjectWrap::Unwrap<VtkSmartVolumeMapperWrap>(info.Holder());
	vtkSmartVolumeMapper *native = (vtkSmartVolumeMapper *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetInterpolationModeToLinear();
}

void VtkSmartVolumeMapperWrap::SetInterpolationModeToNearestNeighbor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSmartVolumeMapperWrap *wrapper = ObjectWrap::Unwrap<VtkSmartVolumeMapperWrap>(info.Holder());
	vtkSmartVolumeMapper *native = (vtkSmartVolumeMapper *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetInterpolationModeToNearestNeighbor();
}

void VtkSmartVolumeMapperWrap::SetRequestedRenderMode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSmartVolumeMapperWrap *wrapper = ObjectWrap::Unwrap<VtkSmartVolumeMapperWrap>(info.Holder());
	vtkSmartVolumeMapper *native = (vtkSmartVolumeMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetRequestedRenderMode(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSmartVolumeMapperWrap::SetRequestedRenderModeToDefault(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSmartVolumeMapperWrap *wrapper = ObjectWrap::Unwrap<VtkSmartVolumeMapperWrap>(info.Holder());
	vtkSmartVolumeMapper *native = (vtkSmartVolumeMapper *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetRequestedRenderModeToDefault();
}

void VtkSmartVolumeMapperWrap::SetRequestedRenderModeToRayCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSmartVolumeMapperWrap *wrapper = ObjectWrap::Unwrap<VtkSmartVolumeMapperWrap>(info.Holder());
	vtkSmartVolumeMapper *native = (vtkSmartVolumeMapper *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetRequestedRenderModeToRayCast();
}

void VtkSmartVolumeMapperWrap::SetRequestedRenderModeToRayCastAndTexture(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSmartVolumeMapperWrap *wrapper = ObjectWrap::Unwrap<VtkSmartVolumeMapperWrap>(info.Holder());
	vtkSmartVolumeMapper *native = (vtkSmartVolumeMapper *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetRequestedRenderModeToRayCastAndTexture();
}

